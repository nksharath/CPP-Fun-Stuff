/*
pbmtweaker.cpp    File handling operations , and various PNM image modifications
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 11/05/2012 4.25 PM
*
*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
//This method calculates double pixel value of the given pixel
unsigned char DoubleThePix(unsigned char byte) {
	unsigned int component;
	component = byte;
	component = component * 2;
	if(component > 255) component = 255;
	byte = component;
	return byte;
}
//This method calculates double pixel value of the given pixel
unsigned char HalfThePix(unsigned char byte) {
	unsigned int component;
	component = byte;
	component = byte / 2;
	if(component < 1) component = 0;
	byte = component;
	return byte;
}
//Invoking Main function
int main(int argc,char* argv[]) {
	if(argc != 4) {
		cout << "Incomplete Format of arguments" << endl;
		cout << "Format is pmtweaker inputfile tweak outputfile" << endl;
	}
	string tweak = argv[2];
	//cout << argv[1];
	//Input Stream
	ifstream file(argv[1],ios::in | ios::binary);
	//Output Stream
	ofstream output(argv[3],ofstream::out);
	char next;
	//Keeping a count to skip the header and comments.
	int headerParts = 4;
	while(file.get(next)) {
		//Checks for newline whitespace , comments(#)
		if(next == '\n') {
			output << '\n';
			if(headerParts > 0) {
				headerParts--;
			}
		} else if (next == ' ') {
			output << ' ';
			if(headerParts > 0) {
				headerParts--;
			}
		} else if(next == '#' && headerParts > 0) {
			//Skipping the comment
			while(file.get(next)) {
				if(next == '\n') {
					break;
				}
			}
		} else {
			//Using unsigned char because it can take the value from 0 to 255.
			unsigned char byte = next;
			if(headerParts == 0) {
				if(tweak == "brighten") {
					byte = DoubleThePix(byte);
				} else if(tweak == "darken") {
					byte = HalfThePix(byte);
				} else if(tweak == "redden") {
					byte = DoubleThePix(byte);
					output << byte;
					file.get(next);
					byte = next;
					byte = HalfThePix(byte);
					output << byte;
					file.get(next);
					byte = next;
					byte = HalfThePix(byte);
					output << byte;
					continue;
				} else if(tweak == "grayscale") {
					int r = byte;
					file.get(next);
					byte = next;
					int g = byte;
					file.get(next);
					byte = next;
					int b = byte;
					int avg = (r+g+b)/3;
					byte = avg;
					output << byte << byte << byte;
					continue;
				} else if(tweak == "swap") {
					//Swaping the r g and b components
					int r = byte;
					file.get(next);
					byte = next;
					int g = byte;
					file.get(next);
					byte = next;
					int b = byte;
					byte = b;
					output << byte;
					byte = r;
					output << byte;
					byte = g;
					output << byte;
					continue;
				}
			}
			// If some unrecognizable tweak is specified it returns the same image.
			output << byte;
		}
	}
	file.close();
	output.close();
}


/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Dilip Mehta : : Batch : 4003-700-01
*@Version       : 1.0.6
*@LastModified  : 09/09/2012 11.30 PM
*
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[] ) {
	//Reading from file
	ifstream FileRead(argv[1],ifstream::in);
	if(!FileRead.good()) {
		cout << "No such file : Example Filename.txt" << endl;
	}
	string CurrentLine;
	while(FileRead.good()) {
		getline(FileRead,CurrentLine);
		int Size = CurrentLine.size();
		if(Size == 0) {
			break;
		}
		int ValuesArray[21];
		//Initialising the array with a value that will not be used
		for(int i = 0;i<21;i++) {
			ValuesArray[i] = 12;
		}
		//Reading the lines character by character
		for (int i=0,j=0; i<Size ; i++) {
			char CurrentChar = CurrentLine.at(i);
			if(CurrentChar != ' ') { // Checks for a white space
				if(CurrentChar == 'X') { // Checks for a Strike
					ValuesArray[j] = 10;
				} else if(CurrentChar == '/') {//Checks for a Spare
					ValuesArray[j] = 11;
				} else {
					ValuesArray[j] = (int)CurrentChar - '0';
				}
				j++;
			}
		}
		int Score = 0;
		int FrameNumber = 0;
		//Calculating the score for each game.
		for(int i = 0; i<21 ; i++) {
			if(FrameNumber != 10) {
				if(ValuesArray[i] == 10) {
					Score = Score + 10;
					FrameNumber++;
					if(ValuesArray[i+2] == 11) {
						Score = Score + 10;
					} else {
							Score = Score + ValuesArray[i+1] + ValuesArray[i+2];
					}
				} else {
					Score = Score + ValuesArray[i];
					if(ValuesArray[i+1] == 11) {
						Score = Score + 10 - ValuesArray[i] + ValuesArray[i+2];
					} else {
						Score = Score + ValuesArray[i+1];
					}
					i++;
					FrameNumber++;
				}
			} else {
				break;
			}
		}
		cout << Score << endl;
		Score = 0;
	}
	FileRead.close();
	return 0;
}

/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.6
*@LastModified  : 09/15/2012 3.26 PM
*
*/

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <cstdlib>

using namespace std;
int main(int argc, char *argv[]) {
	//Reading the command line arguments
	if(argc<=2) {
		cout << "No or inappropriate command line arguments entered" << endl;
		return 0;
	}
	//Generate binary String for unique combinations
	stringstream BinaryStream;
	// Maximum limit is the number of unique combinations
	int MaxLimit = pow(2,(argc-2));
	for(int NumToConvert=0;NumToConvert<MaxLimit;NumToConvert++) {
		//Converting to binary and appending to string
		int temp = NumToConvert;
		while((temp!=0)&&(temp!=1)) {
			BinaryStream << (temp % 2);
			temp = (temp/2);
		}
		BinaryStream << temp << " ";
	}
	//Copying string from the stream to variable.
	string Binaryss = BinaryStream.str();
	//Building combination and checking for valid combinations
	int BinStringLen = Binaryss.length();
	//Storing the first argument after the filename which is sum.
	int SumFinal = atoi(argv[1]);
	int NoOfArguments = argc-2;
	stringstream PrintString;
	int CurrentSum = 0;
	string CurrentString = "";
	for(int i=0,j=0;i<BinStringLen;i++,j++) {
		if(Binaryss[i] == ' ') {
			// If sums are equal for a partcular combination it enters the Print stream.
			if(CurrentSum == SumFinal) {
				PrintString << CurrentString.substr(0,CurrentString.length()-1) << endl;
			}
			CurrentString = "";
			CurrentSum = 0;
			j = 0;
		}else if(Binaryss[i] == '1'){
			CurrentSum = CurrentSum + atoi(argv[j+1]);
			CurrentString = CurrentString + argv[j+1] + "+";
		}

	}
	cout << PrintString.str();
	return 0;
}


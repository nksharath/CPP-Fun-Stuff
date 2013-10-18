/*
 * @Author 	: Pratik Dilip Mehta
 * @Author 	: Sharath Navalpakkam Krishnan
 * @version	: 1.0.3
 * @last modified : 09/16/2012 11.50pm
 **/ 
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>


using namespace std;

vector<string> Merge(vector<string> left_half,vector<string> right_half) {
	int left_half_len = left_half.size();
	int right_half_len = right_half.size();
	int result_len = left_half_len+right_half_len;
	// Result vector
	vector<string> result;
	int loop = 0;
	int left_index = 0;
	int right_index = 0;
	while(loop < result_len) {
		string left_elem = left_half.at(left_index);
		string right_elem = right_half.at(right_index);
		//Sorting by length
		if(left_elem.length() > right_elem.length()) {
			result.push_back(right_elem);
			right_index++;
		} else {
			result.push_back(left_elem);
			left_index++;
		}
		loop++;
		if(right_index == right_half_len) {
			while(loop < result_len) {
				result.push_back(left_half.at(left_index));
				left_index++;
				loop++;
			}
			break;
		} else if(left_index == left_half_len) {
			while(loop < result_len) {
				result.push_back(right_half.at(right_index));
				right_index++;
				loop++;
			}
			break;
		}
	}
	return result;
}
vector<string> MergeSort(int length,vector<string> argument) {
	if(length<=1) {
		return argument;
	}
	int left_len = length/2;
	int right_len;
	if(length%2 != 0){
		right_len = left_len + 1;
	} else {
		right_len = left_len;
	}
	vector<string> left_half;
	vector<string> right_half;
	for(int i=0;i<left_len;i++) {
		left_half.push_back(argument.at(i));
		right_half.push_back(argument.at(i+length/2));
	}
	if(length%2 != 0){
		right_half.push_back(argument.at(length-1));
	}
	//Calling MergeSort Recursively
	left_half = MergeSort(left_half.size(),left_half);
	right_half = MergeSort(right_half.size(),right_half);
	//Merging the independent vectors
	argument = Merge(left_half,right_half);
	return argument;
	
}

int main(int argc,char* argv[]) {
	if(argc <= 1) {
		cout << "No or inappropriate command line arguments entered" << endl;
		return 0;
	}
	vector<string> argument;
	for(int i=1;i<argc;i++) {
		string temp = argv[i];
		argument.push_back(temp); 
	}
	vector<string> result = MergeSort(argc-1,argument);
	
	// Printing result
	for(int i =0;i<result.size();i++) {
		cout << result[i] << endl;
	}
	
	return 0;
}

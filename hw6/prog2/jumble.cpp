
/*
jumble.cpp      : Solves the given puzzle
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/15/2012 8.25 PM
*
*/
#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include "jumble.h"
//Loads the dictionary file by default from /usr/share/dict/words

void Jumble::LoadFile(int arg,char *p[]) {
	string path;
	//Using default path
	if(arg == 1) {
		p[1] = "//usr//share//dict//words";
	}
	ifstream File;
	File.open(p[1]);
	if(!File.good()) {
		cout << "The path of the file or filename is wrong - Try again" << endl;
		exit(0);
	}
	string Line;
	//Pre - Processing
	map<string,vector<string> >::iterator it;
	while(File.good()) {
		getline(File,Line);
		string SortedLine = Line;
		//Sorting the string
		sort(SortedLine.begin(),SortedLine.end());
		//Find it in the map
		it = Dict.find(SortedLine);
		if(it != Dict.end()) {
			//Add to the vector of the existing map key.
			it->second.push_back(Line);
		} else {
			//Add to the map
			vector<string> v;
			v.push_back(Line);
			Dict.insert(pair<string,vector<string> >(SortedLine,v));
		}
	}
}
//Finds the jumbled words from the dictionary and prints all the words
void Jumble::Find(string w) {
	map<string,vector<string> >::iterator it;
	sort(w.begin(),w.end());
	//Finds word from map after sortiing.
	it = Dict.find(w);
	if(it == Dict.end()) {
		cout << "No word found" << endl;
	} else {
		cout << "Words Found : " << endl;
		for(vector<string> :: iterator itt = it->second.begin();itt != it->second.end();itt++) {
			cout << *itt << endl;
		}
	}
}
int main(int argc,char *argv[]) {
	//Take input of the path from user.
	Jumble j;
	//Loading File
	j.LoadFile(argc,argv);
	cout << "Enter the word to find" << endl;
	string word;
	cin >> word;
	//Finding word
	j.Find(word);
	return 1;
}

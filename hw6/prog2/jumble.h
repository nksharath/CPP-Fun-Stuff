
/*
jumble.h        : Declarations and Function signatures of class Jumble
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/15/2012 8.25 PM
*
*/
#ifndef _JUMBLE_H_
#define _JUMBLE_H_
#include <map>
#include <vector>
#include <string>
using namespace std;
class Jumble {
	private :
	//Map that take string as key and vector as value.
	map<string,vector<string> > Dict;
	public :
	//Loads the dictionary file by default from /usr/share/dict/words
	void LoadFile(int arg,char *p[]);
	//Finds the jumbled words from the dictionary and prints all the words
	void Find(string w);
};
#endif

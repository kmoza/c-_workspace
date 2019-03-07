/*
 * main.cpp
 *
 *  Created on: 26-Dec-2013
 *      Author: kmoza
 */
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstddef>
using namespace std;

int main()
{
	string s1;
	string s2;

	s1="this is a string";
	s2=s1;

	//cout<<s1<<endl;
	//cout<<s2;

	string alphabet="abcdefghijklmnopqrstuvwxyz";

	string::const_iterator cii;
	int ii=0;

	for(cii=alphabet.begin();cii!=alphabet.end();cii++)
	{
		cout<<ii++<<" "<<*cii<<endl;
	}

	exit(EXIT_SUCCESS);
}




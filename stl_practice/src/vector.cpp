/*
 * vector.cpp
 *
 *  Created on: 26-Dec-2013
 *      Author: kmoza
 */
#include<iostream>
#include<vector>
#include<string>
#include<chrono>

using namespace std;

int main()
{
	vector<string> ss;
	ss.push_back("The number is 10");
	ss.push_back("the number is 20");
	ss.push_back("the number is 30");

	cout<<"Loop by index\n";

	int ii;

	for(ii=0;ii<ss.size();ii++)
	{
		cout<<ss[ii]<<endl;
	}

	cout<<endl<<"Constant Iterator:\n";

	vector<string>::const_iterator cii;
	for(cii=ss.begin();cii!=ss.end();cii++)
	{
		cout<<*cii<<endl;
	}

	cout<<endl<<"Reverse Iterator:\n";
	vector<string>::reverse_iterator rii;
	for(rii=ss.rbegin();rii!=ss.rend();++rii)
	{
		cout<<*rii<<endl;
	}

	cout<<"\nSample Output\n";

	cout<<ss.size()<<endl;
	cout<<ss[2]<<endl;

	swap(ss[0],ss[2]);
	cout<<ss[2]<<endl;

	return 0;
}




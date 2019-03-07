/*
 * vforkprocess.cpp
 *
 *  Created on: 24-Dec-2013
 *      Author: kmoza
 */
#include<iostream>
#include<cstring>
#include<sys/types.h>
#include<unistd.h>
#include<cstdlib>

using namespace std;

int globalvar = 2;

int main()
{
	string sidentifier;
	int istack = 20;

	pid_t pid;
	pid = vfork();
	if(pid==0)
	{
		//child process specific code
		sidentifier = "Child process:";
		globalvar++;
		istack++;
		cout<<sidentifier;
		cout<<"global var:="<<globalvar;
		cout<<"stack var:="<<istack;
		//_exit(0);
	}
	else if(pid<0)
	{
		cerr<<"failed to fork"<<endl;
		exit(1);
		//throw exception
	}
	else
	{
		//code for parent process only
		sidentifier = "parent process block";
	}
	//executed by parent only;
	cout<<sidentifier;
	cout<<"global var:="<<globalvar;
	cout<<"local var :="<<istack;
	exit(0);

}




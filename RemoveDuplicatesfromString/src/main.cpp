/*
 * main.cpp
 *
 *  Created on: 28-Jan-2014
 *      Author: kmoza
 */



#ifdef Compile

#include<iostream>
#include<string>

using namespace std;

const int size = 10;

class Abc {
private:
	//int a;
	//double **ptr;
//	virtual void foo()
//		{
//
//		}
public:
//	Abc()
//	{
//
//	}
//
//	virtual ~Abc()
//	{
//
//	}

};

class Xyz : public Abc {
private:
public:
};


class EmptyArray {

private:
	char array[0];
public:
	EmptyArray()
	{

	}

	~ EmptyArray()
	{

	}
};

int main()
{
	//char name[20] = {'g','e','e','k','s','f','o','r','g','e','e','k','s'};

	//char *name ="geeksforgeeks";
	string name = "geeksforgeeks";
	/*

	 char uniname[size];

	int i = 0;
	int j = 0;
	int k = 0;

	for(i=0;*(name+i)!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			if(*(name+i) == name[j])
			{

			}
			else
			{
				uniname[k++] = *(name+i);
			}
		}
	}
	uniname[k] = '\0';

	cout<<"String with Duplicates removed is \n";
	for(int m=0;uniname[m]!='\0';m++)
		cout<<" "<<uniname[m];
	*/

	// string reverse algorithm

	/*
	cout << "\nString before reverse = "<<name;

	int firstpos = 0;
	int lastpos = name.length()-1;
	cout<<"\nLength of String " << name <<" = "<< name.length();

	while(firstpos<lastpos)
	{
		//swap the characters
		char temp;
		temp = name.at(lastpos);
		name.at(lastpos) = name.at(firstpos);
		name.at(firstpos) = temp;
		firstpos++;
		lastpos--;
	}
	cout<< "\nString after reverse = "<<name;
	*/

	Abc a;
	cout<<"\nSize of a class with one int var is="<<sizeof(a);

	Xyz x;

	cout <<"\nSize of an empty derived class from an empty base class is=" <<sizeof(x);


	EmptyArray arr;
	cout<<"\nSize of an object of class empty array is  = "<<sizeof(arr);

	EmptyArray arr2[5];

	if((&arr2[0]) == (&arr2[3]))
		cout<<"\nall objects have same location or address";
	else
		cout<<"\nc++ compiler is rock solid to break";

//	int a = 10;
//	int b = 20;
//
//	cout<<"\na and b before swapping" << a<<"  "<<b;
//	a^=b;
//	b^=a;
//	a^=b;
//
//	cout<<"\na and b after swapping" << a << "  "<<b;

	return 0;

}
#endif


#ifdef Compile2

#include <iostream>
using namespace std;

class Empty
{};

class Derived1 : public Empty
{};

class Derived2 : virtual public Empty
{};

class Derived3 : public Empty
{
    char c;
};

class Derived4 : virtual public Empty
{
    char c;
};

class Dummy
{
    char c;
};

int main()
{
    cout << "sizeof(Empty) " << sizeof(Empty) << endl;
    cout << "sizeof(Derived1) " << sizeof(Derived1) << endl;
    cout << "sizeof(Derived2) " << sizeof(Derived2) << endl;
    cout << "sizeof(Derived3) " << sizeof(Derived3) << endl;
    cout << "sizeof(Derived4) " << sizeof(Derived4) << endl;
    cout << "sizeof(Dummy) " << sizeof(Dummy) << endl;

    return 0;
}

#endif


#include<iostream>
#include<cstdio>
using namespace std;


void stringrev(char *);

int main()
{
	char *name = "geeksforgeeks";
	stringrev(name);
}

int i=0;
void stringrev(char *stringvar)
{
	while((*stringvar) != '\0' )
	{
		stringrev(stringvar+1);

		cout<<*(stringvar);

	}
}


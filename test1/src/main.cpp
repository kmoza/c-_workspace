#include<iostream>
#include<cstring>
#include<stdexcept>
#include<cassert>

#define Def 0

using namespace std;

double divideNumbers(int numr,int deno)
{
	if(deno==0)
	{
		//throw 0;
		throw exception();
	}
	else
		return (numr/deno);
}

int main()
{
#if Def
	cout<<"Hell ya C++ working";
	return 0;
#endif

#if Def2
	int *ptr; //= new int;
	*ptr = 8;
	cout<<"\nValue of ptr="<<*ptr<<"\tAddress of ptr is="<<ptr;
#endif

#if Def3
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	str3 = str1+" "+str2;
	if(str3=="Hello World")
		cout<<"Bingo the strings are equal\n";
	else
		cout<<"String class is fake";
#endif

#if Def4
	try
	{
		double val=divideNumbers(5,0);
		cout<<"Error Encounterred\n"<<"Val is=\n"<<val;
	}
	catch(exception& e)
	{
		cout<<"Caught Exception:\tDivision by zero\n";
	}
#endif

#if Def5
	char* mystring = new char[3];
	mystring[1]='1';
	cout<<mystring;

	//mutable int i;
	const int i=1;
#endif

	int a,b,c;
	cout<<"Enter number:"<<endl;
	cin>>a>>b;
	assert(b!=0);
	cout<<"\nThe div is"<<a/b<<endl;


	return 0;
}

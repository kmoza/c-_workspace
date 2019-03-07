/*
 * db_test.cpp
 *
 *  Created on: 24-Dec-2013
 *      Author: kmoza
 */

#include<cstdlib>
#include<iostream>
#include<mysql_connection.h>
#include<cppconn/driver.h>
#include<cppconn/exception.h>
#include<cppconn/resultset.h>
#include<cppconn/statement.h>

using namespace std;
using namespace sql;

int main(void)
{
	Driver *dr;
	Connection *con;
	try{
	dr = get_driver_instance();
	con = dr->connect("tcp://127.0.0.1:3306","root","root");
	cout<<"Connectiorn Successfull";
	}
	catch(SQLException &e)
	{
		cout<<"SQL Error:"<<e.getErrorCode();
	}
	return 0;
}





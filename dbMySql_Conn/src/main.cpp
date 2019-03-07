#include<cstdlib>
#include<iostream>
#include <mysql_connection.h>

#include<cppconn/driver.h>
#include<cppconn/exception.h>
#include<cppconn/resultset.h>
#include<cppconn/statement.h>
#include<cppconn/connection.h>


using namespace std;

int main(void)
{
	cout<<endl;
	cout<<"Running 'select hello world'\n";

	try
	{
		using namespace sql;
		Driver *driver;
		Connection *con;
		Statement *stmt;
		ResultSet *res;

		driver = get_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306","root","root");
		con->setSchema("cms_sim");

		stmt = con->createStatement();
		res = stmt->executeQuery("select * from radar_data");
		cout<<"Display Radar Data table\n";

		while(res->next())
		{
			cout<<"\t.. MySQL replies:";
			cout<<"\tRadar Name:"<<res->getString(1)<<"Radar Range:"<<res->getInt(2)<<"\n";

		}

		delete res;
		delete stmt;
		delete con;

	}
	catch(sql::SQLException &e)
	{
		cout<<"#ERR SQL EXception \t"<<"my sql error code"<<e.getErrorCode();

	}
	cout<<endl;
	return EXIT_SUCCESS;
}

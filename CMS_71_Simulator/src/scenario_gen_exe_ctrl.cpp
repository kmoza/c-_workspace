/*
 * scenario_gen_exe_ctrl.cpp
 *
 *  Created on: 14-Jan-2014
 *      Author: kmoza
 */

/* Standard C++ includes */
#include <stdlib.h>
#include <iostream>

/*
  Include directly the different
  headers from cppconn/ and mysql_driver.h + mysql_util.h
  (and mysql_connection.h). This will reduce your build time!
*/
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

#include "scenario_gen_exe_ctrl.h"

using namespace std;
using namespace sql;


SCENARIO_GEN_EXE_CTRL::SCENARIO_GEN_EXE_CTRL()
{

	scenarioName = " ";

}

SCENARIO_GEN_EXE_CTRL::~SCENARIO_GEN_EXE_CTRL()
{
	//deleting the temp objects
}


void SCENARIO_GEN_EXE_CTRL::createScenario(string name)
{
	scenarioName = name;
	try
		{
		  Driver *driver;
		  Connection *con;
		  Statement *stmt;
		  //ResultSet *res;
		  PreparedStatement *pstmt;

		  /* Create a connection */
		  driver = get_driver_instance();
		  con = driver->connect("tcp://127.0.0.1:3306", "root", "root");

		  /* Connect to the MySQL cms_sim database */
		  con->setSchema("cms_sim");

		  stmt = con->createStatement();
		  pstmt = con->prepareStatement("INSERT INTO scenario(name) VALUES (?)");

		  pstmt->setString(1,scenarioName);

		  pstmt->executeUpdate();

		  delete pstmt;
		  //delete res;
		  delete stmt;
		  delete con;

		}
		catch (sql::SQLException &e)
		{

		}

}

void SCENARIO_GEN_EXE_CTRL::deleteScenario(string name)
{
	scenarioName = name;
	try
		{
		  Driver *driver;
		  Connection *con;
		  Statement *stmt;
		  //ResultSet *res;
		  PreparedStatement *pstmt;

		  /* Create a connection */
		  driver = get_driver_instance();
		  con = driver->connect("tcp://127.0.0.1:3306", "root", "root");

		  /* Connect to the MySQL cms_sim database */
		  con->setSchema("cms_sim");

		  stmt = con->createStatement();
		  pstmt = con->prepareStatement("DELETE FROM scenario WHERE name = ?");
		  pstmt->setString(1,scenarioName);

		  pstmt->executeUpdate();

		  //delete res;
		  delete stmt;
		  delete con;

		}
		catch (sql::SQLException &e)
		{

		}

}

void SCENARIO_GEN_EXE_CTRL::editScenario(string name,string modname)
{
	scenarioName = name;
	string newname = modname;

	try
		{
		  Driver *driver;
		  Connection *con;
		  Statement *stmt;
		  //ResultSet *res;
		  PreparedStatement *pstmt;

		  /* Create a connection */
		  driver = get_driver_instance();
		  con = driver->connect("tcp://127.0.0.1:3306", "root", "root");

		  /* Connect to the MySQL cms_sim database */
		  con->setSchema("cms_sim");

		  stmt = con->createStatement();
		  pstmt = con->prepareStatement("UPDATE scenario SET name = ? WHERE name = ?");
		  pstmt->setString(1,newname);
		  pstmt->setString(2,scenarioName);

		  pstmt->executeUpdate();

		  //delete res;
		  delete stmt;
		  delete con;

		}
		catch (sql::SQLException &e)
		{

		}

}


ResultSet& SCENARIO_GEN_EXE_CTRL::loadScenario(string name)
{
	 ResultSet *res;
	try
	{
	  Driver *driver;
	  Connection *con;
	  Statement *stmt;

	  PreparedStatement *pstmt;

	  /* Create a connection */
	  driver = get_driver_instance();
	  con = driver->connect("tcp://127.0.0.1:3306", "root", "root");

	  /* Connect to the MySQL cms_sim database */
	  con->setSchema("cms_sim");

	  stmt = con->createStatement();
	  //res = stmt->executeQuery("SELECT * FROM scenario ");
	  pstmt = con->prepareStatement("SELECT * FROM scenario WHERE name = ?");
	  pstmt->setString(1,scenarioName);
	  res = pstmt->executeQuery();

	  //delete res;
	  delete stmt;
	  delete con;

	  //return *res;

	}
	catch (sql::SQLException &e)
	{

	}

	return *res;

}

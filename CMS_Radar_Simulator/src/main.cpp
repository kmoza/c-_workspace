/*
 * main.cpp
 *
 *  Created on: 28-Jan-2014
 *      Author: kmoza
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

#include "simclock.h"
#include "Radar.h"
#include "Track.h"
#include "Scenario.h"

using namespace std;

int main()
{

	int choice;
	/*
	SimClock *si_clock;
	si_clock = SimClock::initClock();
	si_clock->tickClock();


	SimClock *si_clock2;
	si_clock2 = SimClock::initClock();
	si_clock2->tickClock();

	if (si_clock == si_clock2)
		cout<<"Equal Objects\n";
	*/

	/*
	//system("clear");
	cout << si_clock->getTime();
	si_clock->tickClock();
	cout << si_clock->getTime();

	vector<Radar *> radars;
	vector<Track *> tracks;
	*/
	system("clear");
	cout << "/* ************************************************************************************************************************************************"<<endl;
	cout << "*************************************************************** CMS Simulator *********************************************************************"<<endl;
	cout << "***************************************************************************************************************************************************/"<<endl;
	/*
	do {

	}while(false);*/

	while(1)
	{
		//Displaying the menu
		cout << "1. Create Scenario."<<endl;
		cout << "2. Display Scenario." <<endl;
		cout << "3. Edit Scenario." <<endl;
		cout << "4. Run Scenario." <<endl;
		cout << "5. Exit"<<endl;
		cout << "Enter Your Choice = ";
		cin >> choice;

		//calling different functions depending on the choice entered by the user
		switch(choice)
		{
			case 1:
				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
				break;

			case 5:
				cout << "Exiting CMS Simulator"<<endl;
				sleep(3);
				system("clear");
				exit(0);

			default:
				cout <<"Please enter correct choice."<<endl;
				break;
		}


	}

	return EXIT_SUCCESS;
}


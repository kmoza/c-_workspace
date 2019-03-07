/*
 * scenario_gen_exe_ctrl.h
 *
 *  Created on: 14-Jan-2014
 *      Author: kmoza
 */

#ifndef SCENARIO_GEN_EXE_CTRL_H
#define SCENARIO_GEN_EXE_CTRL_H

#include "mysql_connection.h"

#include <cppconn/resultset.h>
#include<iostream>
using namespace std;
using namespace sql;

//## class SCENARIO_GEN_EXE_CTRL
class SCENARIO_GEN_EXE_CTRL
{
    ////    Constructors and destructors    ////

public :

    //## auto_generated
    SCENARIO_GEN_EXE_CTRL();

    //## auto_generated
    ~SCENARIO_GEN_EXE_CTRL();

    ////    Operations    ////

    //## operation changeCMSState()
    void changeCMSState();

    //## operation createMissile()
    void createMissile();

    //## operation createRadar()
    void createRadar();

    //## operation createScenario()
    void createScenario(string name);

    //## operation deleteScenario()
    void deleteScenario(string name);

    //## operation editScenario()
    void editScenario(string name,string modname);

    //## operation editScenario()
    ResultSet & loadScenario(string name);

    //## operation jumpScenario()
    void jumpScenario();

    //## operation manageSubmarine()
    void manageSubmarine();

    //## operation modifyMissile()
    void modifyMissile();

    //## operation modifyRadar()
    void modifyRadar();

    //## operation sendTestMsg()
    void sendTestMsg();

protected :

   string scenarioName;		//## attribute scenarioName


};

#endif

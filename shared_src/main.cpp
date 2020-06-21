//
//  main.cpp
//  PGHQAgent
//
//  Created by hugo rodrigues on 28/05/2020.
//  Copyright © 2020 hugo rodrigues. All rights reserved.
//

#include <iostream>
#include <pqxx/pqxx>

#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include <log4cplus/initializer.h>
#include "cmdserver/StandardServer.h"
#include "config/AgentConfig.h"
#include "job/IDbConnMonitorJob.h"


using namespace std;


void connect()
{
    pqxx::connection c("postgresql://accounting@localhost/company");
}




int main(int argc, char **argv)
{
    cout << "PGHQ AGENT" << endl; // prints !!!Hello World!!!

    //start_standard_server( argc, argv);
    
    // Initialization and deinitialization.
    //log4cplus::Initializer initializer;

    //log4cplus::BasicConfigurator config;
    //config.configure();

    //log4cplus::Logger logger = log4cplus::Logger::getInstance(
    //LOG4CPLUS_TEXT("main"));
    //LOG4CPLUS_WARN(logger, LOG4CPLUS_TEXT("Hello, World!"));
    
    //global_config.initialize();


    IDbConnMonitorJob cj("Job1");

    cj.start();
    cj.join();


    return 0;
}

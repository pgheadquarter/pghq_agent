//============================================================================
// Name        : pghq_agent.cpp
// Author      : hugo rodrigues
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "shared_src/cmdserver/StandardServer.h"
#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include <log4cplus/initializer.h>
#include "shared_src/cmdserver/StandardServer.h"


using namespace std;

int main(int argc, char **argv)
{
	cout << "PGHQ AGENT" << endl; // prints !!!Hello World!!!

    //start_standard_server( argc, argv);

    // Initialization and deinitialization.
    log4cplus::Initializer initializer;

    log4cplus::BasicConfigurator config;
    config.configure();

    log4cplus::Logger logger = log4cplus::Logger::getInstance(
    LOG4CPLUS_TEXT("main"));
    LOG4CPLUS_WARN(logger, LOG4CPLUS_TEXT("Hello, World!"));

	return 0;
}

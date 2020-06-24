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
#include "log/XLog.h"


#include <boost/chrono.hpp>


using namespace std;
using namespace boost::chrono;


void connect()
{
    pqxx::connection c("postgresql://accounting@localhost/company");
}



string now()
{
	 auto t  = std::time(nullptr);
	 auto tm = *std::localtime(&t);

	 std::ostringstream oss;
	 oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S %z");
	 return oss.str();
}




/**
 * main
 */
int main(int argc, char **argv)
{
    cout << "PGHQ AGENT" << endl; // prints !!!Hello World!!!

    //start_standard_server( argc, argv);
    
    //global_config.initialize();

    global_log.info("info test");
    global_log.warn("err test");
    global_log.err("err test");

    cout << now() << endl;

    IDbConnMonitorJob cj("Job1");

    cj.start();
    cj.join();

    return 0;
}

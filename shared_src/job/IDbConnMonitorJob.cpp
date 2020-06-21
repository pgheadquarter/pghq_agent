/*
 * IDbConnMonitorJob.cpp
 *
 *  Created on: Jun 21, 2020
 *      Author: hugorodrigues
 */

#include "IDbConnMonitorJob.h"
#include <iostream>

/**
 * IDbConnMonitorJob
 */
IDbConnMonitorJob::IDbConnMonitorJob(const string & jobname)
	: IJob(jobname)
{

}

/**
 * ~IDbConnMonitorJob
 */
IDbConnMonitorJob::~IDbConnMonitorJob()
{
}


/**
 *run
 */
void IDbConnMonitorJob::run()
{
	cout << "--- Start DB Conn Monitor Job ---" << endl;

	cout << "teste" << endl;

}

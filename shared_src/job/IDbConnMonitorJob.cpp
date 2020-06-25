/*
 * IDbConnMonitorJob.cpp
 *
 *  Created on: Jun 21, 2020
 *      Author: hugorodrigues
 */

#include "IDbConnMonitorJob.h"
#include <iostream>
#include "../log/XLog.h"


//
// DEFINES
//
#define DEFAULT_TIME_BETWWEN_CONN_MS		2000L



/**
 * IDbConnMonitorJob
 */
IDbConnMonitorJob::IDbConnMonitorJob(const string & jobname)
	: IJob(jobname),
	  m_stop_service(false),
	  m_time_between_connection_ms(DEFAULT_TIME_BETWWEN_CONN_MS)
{

}

/**
 * ~IDbConnMonitorJob
 */
IDbConnMonitorJob::~IDbConnMonitorJob()
{
}


/**
 * setDBConnectionByJson
 */
void IDbConnMonitorJob::setDBConnectionByJson(const string & dbjson)
{
	m_pg_conn.parseDBJson(dbjson);
}


/**
 * setDBConnection
 */
void IDbConnMonitorJob::setDBConnection(const PGConnection & pg_conn)
{
	m_pg_conn = pg_conn;
}



/**
 * run
 */
void IDbConnMonitorJob::run()
{
	global_log.info( string("Starting JOB ") + getName() + string(" - DB Connection Monitor"));
	global_log.info( string("server name:")  + m_pg_conn.hostname );

	while (m_stop_service==false)
	{
		// get initial time


		// monitor queries time


		sleep(m_time_between_connection_ms);
	}

}




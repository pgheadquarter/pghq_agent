/*
 * IDbConnMonitorJob.h
 *
 *  Created on: Jun 21, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_JOB_IDBCONNMONITORJOB_H_
#define SHARED_SRC_JOB_IDBCONNMONITORJOB_H_

#include "IJob.h"
#include "../thread/Thread.h"
#include "../db/PGConnection.h"

/**
 * class IDbConnMonitorJob
 */
class IDbConnMonitorJob:
		public IJob, public Thread<IDbConnMonitorJob>
{
private:
	PGConnection 	m_pg_conn;

	// control
	bool			m_stop_service;

	// cycle parameter
	long			m_time_between_connection_ms;	// in milliseconds..



public:
	IDbConnMonitorJob(const string & jobname);
	virtual ~IDbConnMonitorJob();

	void setDBConnectionByJson(const string & dbjson);
	void setDBConnection(const PGConnection & pg_conn);

	virtual void run();
};

#endif /* SHARED_SRC_JOB_IDBCONNMONITORJOB_H_ */

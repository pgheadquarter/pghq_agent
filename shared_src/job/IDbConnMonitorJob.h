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

/**
 * class IDbConnMonitorJob
 */
class IDbConnMonitorJob:
		public IJob, public Thread<IDbConnMonitorJob>
{
public:
	IDbConnMonitorJob(const string & jobname);
	virtual ~IDbConnMonitorJob();

	virtual void run();
};

#endif /* SHARED_SRC_JOB_IDBCONNMONITORJOB_H_ */

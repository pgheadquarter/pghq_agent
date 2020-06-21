/*
 * IJob.h
 *
 *  Created on: Jun 21, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_JOB_IJOB_H_
#define SHARED_SRC_JOB_IJOB_H_

#include <string>
#include <boost/thread.hpp>

using namespace std;


/**
 * class IJob
 */
class IJob
{
private:
	string	m_name;

public:
	IJob(const string & jobname) :m_name(jobname)	{}
	virtual ~IJob()									{}

	inline const string & getName()					{ return m_name;}
};

#endif /* SHARED_SRC_JOB_IJOB_H_ */

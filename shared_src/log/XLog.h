/*
 * XLog.h
 *
 *  Created on: Jun 23, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_LOG_XLOG_H_
#define SHARED_SRC_LOG_XLOG_H_


#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include <log4cplus/initializer.h>

using namespace std;


//
// STATICS
//

#define XLOG_INFO	1
#define XLOG_WARN	2
#define XLOG_ERR	3

/**
 * class XLog
 */
class XLog
{
private:
	log4cplus::Initializer 			m_initializer;
	log4cplus::BasicConfigurator 	m_config;
	log4cplus::Logger 				m_logger;

public:
	XLog();
	virtual ~XLog();

	void info(const string & msg) 	{ displayMsg(XLOG_INFO, msg); }
	void warn(const string & msg)	{ displayMsg(XLOG_WARN, msg); }
	void err(const string & msg)	{ displayMsg(XLOG_ERR, msg); }

	void info(const char * format...);
	void warn(const char * format...);
	void err(const char * format...);

	string now();

protected:

	void displayMsg(int type, const string & msg);

};

//----------------
// global log
//----------------
extern XLog global_log;



#endif /* SHARED_SRC_LOG_XLOG_H_ */

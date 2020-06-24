/*
 * XLog.cpp
 *
 *  Created on: Jun 23, 2020
 *      Author: hugorodrigues
 */

#include "XLog.h"
#include <iomanip>
#include <stdio.h>
#include <log4cplus/fileappender.h>


using namespace std;


//
// static
//
XLog global_log;


/**
 * XLog
 */
XLog::XLog()
	:m_initializer(),
	 m_config()
{
	m_config.configure();

	m_logger = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("pghqlog"));

	log4cplus::SharedAppenderPtr fileAppender(new log4cplus::FileAppender("pghqlog.log"));

	m_logger.addAppender(fileAppender);
}



/**
 * ~XLog
 */
XLog::~XLog()
{
}

/**
 * info
 */
void XLog::info(const char * format...)
{
	char dest[4096];
	va_list argptr;
	va_start(argptr, format);
	vsnprintf(dest, 4095, format, argptr);
	va_end(argptr);

	string s_dest(dest);
	displayMsg(XLOG_INFO, s_dest);
}

/**
 * warn
 */
void XLog::warn(const char * format...)
{
	char dest[4096];
	va_list argptr;
	va_start(argptr, format);
	vsnprintf(dest, 4095, format, argptr);
	va_end(argptr);

	string s_dest(dest);
	displayMsg(XLOG_WARN, s_dest);
}

/**
 * err
 */
void XLog::err(const char * format...)
{
	char dest[4096];
	va_list argptr;
	va_start(argptr, format);
	vsnprintf(dest, 4095, format, argptr);
	va_end(argptr);

	string s_dest(dest);
	displayMsg(XLOG_ERR, s_dest);
}



/**
 * displayMsg
 */
void XLog::displayMsg(int type, const string & msg)
{
	ostringstream msg2disp;

	// calculate the time
	msg2disp << "[" << XLog::now() << "] " << msg;

	switch(type)
	{
		case XLOG_INFO: LOG4CPLUS_INFO(m_logger, msg2disp.str()); 	break;
		case XLOG_WARN:	LOG4CPLUS_WARN(m_logger, msg2disp.str()); 	break;
		case XLOG_ERR:  LOG4CPLUS_ERROR(m_logger, msg2disp.str()); 	break;
	}

}


/**
 * now
 */
string XLog::now()
{
	 auto t  = std::time(nullptr);
	 auto tm = *std::localtime(&t);

	 std::ostringstream oss;
	 oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
	 return oss.str();
}

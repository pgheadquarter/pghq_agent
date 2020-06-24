/*
 * PGConnection.h
 *
 *  Created on: Jun 23, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_DB_PGCONNECTION_H_
#define SHARED_SRC_DB_PGCONNECTION_H_

#include <string>

using namespace std;

/**
 * class PGConnection
 */
class PGConnection
{
public:
	string 	servername;
	string  hostname;
	string	username;
	string  password;
	int		port;
	string  dbname;
	bool    use_ssl;


	PGConnection();
	virtual ~PGConnection();

	bool	parseConnectionString(string connstr);
	bool	parseDBJson(string dbjson);
};


#endif /* SHARED_SRC_DB_PGCONNECTION_H_ */

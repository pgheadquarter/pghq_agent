/*
 * PGConnection.cpp
 *
 *  Created on: Jun 23, 2020
 *      Author: hugorodrigues
 */

#include "PGConnection.h"
#include <nlohmann/json.hpp>

using namespace nlohmann;


/**
 * PGConnection
 */
PGConnection::PGConnection()
	: servername(""),
	  hostname(""),
	  username(""),
	  password(""),
	  port(5432),
	  dbname("postgres"),
	  use_ssl(false)
{
}

/**
 * ~PGConnection
 */
PGConnection::~PGConnection()
{
}



/**
 * parse_connection_string
 */
bool PGConnection::parseConnectionString(string connstr)
{

	return false;
}



/**
 * parseDBJson
 */
bool PGConnection::parseDBJson(string dbjson)
{
	try
	{
		json j = json::parse(dbjson);
	}
	catch(const exception & ex)
	{
		return false;
	}
	return false;
}


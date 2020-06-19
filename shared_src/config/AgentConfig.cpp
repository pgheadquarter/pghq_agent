/*
 * AgentConfig.cpp
 *
 *  Created on: Jun 18, 2020
 *      Author: hugorodrigues
 */

#include "AgentConfig.h"
#include <iostream>
#include <fstream>
#include "../constants/constants.h"
#include <string>
#include <array>

using namespace std;
//#include <tao/json.hpp>
#include <nlohmann/json.hpp>

using namespace nlohmann;

//
// STATIC
//
AgentConfig global_config;


/**
 * AgentConfig
 */
AgentConfig::AgentConfig()
{
}

/**
 * ~AgentConfig
 */
AgentConfig::~AgentConfig()
{
}



void AgentConfig::initialize()
{
	cout << "> find pghq agent config on default dir:" << DEFAULT_CONFIG_FOLDER << endl;

	// create an empty structure (null)
	json j;

	// add a number that is stored as double (note the implicit conversion of j to an object)
	j["pi"] = 3.141;


	cout << "json:" << j << endl;
}

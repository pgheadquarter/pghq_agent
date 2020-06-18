/*
 * AgentConfig.h
 *
 *  Created on: Jun 18, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_CONFIG_AGENTCONFIG_H_
#define SHARED_SRC_CONFIG_AGENTCONFIG_H_

#include <string>

using namespace std;

/**
 * class AgentConfig
 *
 */
class AgentConfig
{
private:
	string	folder_input_cmd;
	string 	folder_output_cmd;

public:
	AgentConfig();
	virtual ~AgentConfig();

	const string & getInputFolderCmd() 		{	return folder_input_cmd;	}
	const string & getOutputFolderCmd()		{	return folder_output_cmd;	}


	void initialize();


};

//
// global_config
//
extern AgentConfig global_config;


#endif /* SHARED_SRC_CONFIG_AGENTCONFIG_H_ */

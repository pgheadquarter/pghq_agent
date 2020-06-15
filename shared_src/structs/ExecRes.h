/*
 * ExecRes.h
 *
 *  Created on: Jun 4, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_STRUCTS_EXECRES_H_
#define SHARED_SRC_STRUCTS_EXECRES_H_

#include <string>

using namespace std;

/**
 * class ExecRes
 */
class ExecRes
{
public:
	int 		code;
	string 		msg;

	ExecRes();
	ExecRes(const ExecRes &);

	virtual ~ExecRes();

};

#endif /* SHARED_SRC_STRUCTS_EXECRES_H_ */

/*
 * ExecRes.cpp
 *
 *  Created on: Jun 4, 2020
 *      Author: hugorodrigues
 */

#include "ExecRes.h"

/**
 * ExecRes
 */
ExecRes::ExecRes()
	:code(int()),
	 msg()
{

}


/**
 * ExecRes
 */
ExecRes::ExecRes(const ExecRes & val)
	:code(val.code),
	 msg(val.msg)
{
}


/**
 * ~ExecRes
 */
ExecRes::~ExecRes()
{
}



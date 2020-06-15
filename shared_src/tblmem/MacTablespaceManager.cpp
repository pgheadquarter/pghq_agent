/*
 * MacTablespaceManager.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: hugorodrigues
 */

#include "MacTablespaceManager.h"

/**
 * MacTablespaceManager
 */
MacTablespaceManager::MacTablespaceManager()
{
}


/**
 * ~MacTablespaceManager
 */
MacTablespaceManager::~MacTablespaceManager()
{
}


/**
 *
 */
const ExecRes & MacTablespaceManager::validateIFAllCmdsExists4VirtualMemDisk()
{
	ExecRes retVal;

	return retVal;
}


/**
 *
 *
 *
 * hdiutil attach -nomount ram://2097152
 * newfs_hfs /dev/disk3
 * mkdir /Volumes/tablespace
 * pwd
 * mount -t hfs /dev/disk3 /Users/hugorodrigues/vtable
 *
 */
const ExecRes & MacTablespaceManager::createLocalVitualMemDisk()
{
	ExecRes retVal;

	return retVal;
}



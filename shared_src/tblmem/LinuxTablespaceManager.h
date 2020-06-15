/*
 * LinuxTablespaceManager.h
 *
 *  Created on: Jun 5, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_TBLMEM_LINUXTABLESPACEMANAGER_H_
#define SHARED_SRC_TBLMEM_LINUXTABLESPACEMANAGER_H_

#include "TablespaceManager.h"

/**
 *  class LinuxTablespaceManager
 */
class LinuxTablespaceManager : TablespaceManager
{
public:
	LinuxTablespaceManager();
	virtual ~LinuxTablespaceManager();

	virtual const ExecRes & validateIFAllCmdsExists4VirtualMemDisk();
	virtual const ExecRes & createLocalVitualMemDisk();

};

#endif /* SHARED_SRC_TBLMEM_LINUXTABLESPACEMANAGER_H_ */

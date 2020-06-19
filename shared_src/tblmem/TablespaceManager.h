/*
 * TablespaceManager.h
 *
 *  Created on: Jun 4, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_TBLMEM_TABLESPACEMANAGER_H_
#define SHARED_SRC_TBLMEM_TABLESPACEMANAGER_H_

#include <string>
#include "../structs/ExecRes.h"


/**
 * class TablespaceManager
 */
class TablespaceManager
{
public:
	TablespaceManager();
	virtual ~TablespaceManager();

	virtual const ExecRes & validateIFAllCmdsExists4VirtualMemDisk() = 0;
	virtual const ExecRes & createLocalVitualMemDisk()				 = 0;

};

#endif /* SHARED_SRC_TBLMEM_TABLESPACEMANAGER_H_ */

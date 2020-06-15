/*
 * MacTablespaceManager.h
 *
 *  Created on: Jun 5, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_TBLMEM_MACTABLESPACEMANAGER_H_
#define SHARED_SRC_TBLMEM_MACTABLESPACEMANAGER_H_


#include "TablespaceManager.h"


/**
 * class MacTablespaceManager
 */
class MacTablespaceManager : TablespaceManager
{

public:
	MacTablespaceManager();
	virtual ~MacTablespaceManager();

	virtual const ExecRes & validateIFAllCmdsExists4VirtualMemDisk();
	virtual const ExecRes & createLocalVitualMemDisk();

};

#endif /* SHARED_SRC_TBLMEM_MACTABLESPACEMANAGER_H_ */

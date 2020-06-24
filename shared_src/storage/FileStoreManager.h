/*
 * FileStoreManager.h
 *
 *  Created on: Jun 23, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_STORAGE_FILESTOREMANAGER_H_
#define SHARED_SRC_STORAGE_FILESTOREMANAGER_H_


#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <mutex>

using namespace std;


/**
 * class FileStoreManager
 */
class FileStoreManager
{
private:
	string	m_base_dir;
	string  m_file_suffix;
	int		m_del_days_behind;


public:
	FileStoreManager( const string & base_dir, const string & file_suffix );
	virtual ~FileStoreManager();


private:
    bool    openNewFile();
    int     clearOldFilesInDir();
    string  genFileDailyName();


};

#endif /* SHARED_SRC_STORAGE_FILESTOREMANAGER_H_ */

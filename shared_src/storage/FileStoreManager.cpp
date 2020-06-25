/*
 * FileStoreManager.cpp
 *
 *  Created on: Jun 23, 2020
 *      Author: hugorodrigues
 */

#include "FileStoreManager.h"

/**
 * FileStoreManager
 */
FileStoreManager::FileStoreManager(const string & base_dir, const string & file_suffix, int del_days_behind)
	: m_base_dir(base_dir),
	  m_file_suffix(file_suffix),
	  m_del_days_behind()
{
}

/**
 * ~FileStoreManager
 */
FileStoreManager::~FileStoreManager()
{
}





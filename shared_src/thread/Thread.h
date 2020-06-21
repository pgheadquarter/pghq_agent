/*
 * Thread
 *
 *  Created on: Jun 21, 2020
 *      Author: hugorodrigues
 */

#ifndef SHARED_SRC_THREAD_THREAD_H_
#define SHARED_SRC_THREAD_THREAD_H_


#include <boost/thread.hpp>

/**
 * class Thread
 */
template <typename T> class Thread
{
private:
	boost::thread* thread;

public:
	virtual ~Thread() {}

	virtual void run() = 0;


	void start()
	{
		thread = new boost::thread(&T::run, (T*)this);
	}

	void join()
	{
		if (thread!=NULL) thread->join();
	}

};


#endif /* SHARED_SRC_THREAD_THREAD_H_ */

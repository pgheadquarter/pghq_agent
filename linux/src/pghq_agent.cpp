//============================================================================
// Name        : pghq_agent.cpp
// Author      : hugo rodrigues
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "shared_src/cmdserver/StandardServer.h"


using namespace std;

int main(int argc, char **argv)
{
	cout << "PGHQ AGENT" << endl; // prints !!!Hello World!!!

	start_standard_server( argc, argv);

	return 0;
}

//
//  main.cpp
//  PGHQAgent
//
//  Created by hugo rodrigues on 28/05/2020.
//  Copyright © 2020 hugo rodrigues. All rights reserved.
//

#include <iostream>
#include "shared_src/cmdserver/StandardServer.h"

using namespace std;

int main(int argc, char **argv)
{
    cout << "PGHQ AGENT" << endl; // prints !!!Hello World!!!

    start_standard_server( argc, argv);

    return 0;
}

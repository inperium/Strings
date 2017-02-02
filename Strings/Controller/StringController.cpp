//
//  StringController.cpp
//  Strings
//
//  Created by Bowen, Isaac on 2/2/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include <iostream>
#include "StringController.hpp"

using namespace std;

void StringController :: start()
{
    length();
    empty();
}

void StringController :: length()
{
    string withLength;
    withLength = "This checks the String Length";
    cout << withLength.length() << endl;
}

void StringController :: empty()
{
    string withEmpty;
    withEmpty = "This checks if the String is empty";
    cout << withEmpty.empty() << endl;
}


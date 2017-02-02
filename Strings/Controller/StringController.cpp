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
    useBrackets();
    atInt();
    length();
    empty();
    substringWithEnd();
    substringWithStart();
    compareString();
}

void StringController :: useBrackets()
{
    string useTheBrackets;
    useTheBrackets = "Brackets";
    for (int i = 0; i < useTheBrackets.length(); i++)
    {
        cout << useTheBrackets[i] << endl;
    }
}

void StringController:: atInt()
{
    string useTheBrackets;
    useTheBrackets = "At int Method";
    for (int i = 0; i < useTheBrackets.length(); i++)
    {
        cout << useTheBrackets[i] << endl;
    }
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

void StringController :: substringWithEnd()
{
    string withEnd;
    withEnd = "This creates a substring with the specified start and end";
    cout << withEnd.substr(5,12) << endl;
}

void StringController :: substringWithStart()
{
    string withStart;
    withStart = "This creates a substring from the specified start";
    cout << withStart.substr(12)<< endl;
}

void StringController:: compareString()
{
    
}

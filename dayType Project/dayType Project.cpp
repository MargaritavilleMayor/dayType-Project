 // dayType Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

int main()
{
    dayType sunday_start{ 0 };
    sunday_start.print_day();
    cout << endl << sunday_start.return_previous();
    cout << endl << sunday_start.return_future(1);
    dayType monday_start{ 1 };
    cout << endl << monday_start.return_present() << endl;
    monday_start.add_days(3);
    monday_start.print_day();
}

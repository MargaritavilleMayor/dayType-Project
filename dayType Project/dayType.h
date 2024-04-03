#pragma once
#include <iostream>
#include <string>

using namespace std;

class dayType
{
private:

    const string s_days[7]{ "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int current_day;

public:

    //Input: An integer 0-6 with each inter corresponding to a day of the week (Ex. 0 = Sunday, 1 = Monday, etc.)
    //Process: uses the integer that's passed into the class to initialize a private variable
    //Output: Initializes the private variable
    dayType(int temp) :
        current_day{ temp }
    {
    }

    //Input: Integer. How many days forward the user wants the date to be moved up
    //Output: Sets the current day to the day of the week that is x days ahead of what the day used to be
    void add_days(int i)
    {
        current_day = (current_day + i) % 7;
    }

    //Input: Requires that the current_day variable be initialized to a number
    //Process: Uses the current_day var as the index position to print out he current day from the array of days
    //Output: Prints out the current day of the week that is stored in the object
    void print_day()
    {
        cout << s_days[current_day];
    }

    //Input: Int with var being the number of days in the future user wants to check the day of the week of
    //Process: Uses modulo division so that whenever current_day goes over 6 it will reset back to 0. Stores day in a string
    //Output: string that returns a day of the week
    string return_future(int j)
    {
        string temp{};
        temp = s_days[(current_day + j) % 7];
        return temp;
    }

    //Input: Requires the current_day var to be initialized
    //Process: uses the current_day var as the index position for the s_days array and stores the day in a string and returns it
    //Output: Current day of the week that is stored in object in string form
    string return_present()
    {
        string temp{};
        temp = s_days[current_day];
        return temp;
    }

    //Input: Requires the current_day var to initialized
    //Process: If current_day is 0, func will return Saturday, otherwise func will return element of s_days[current_day - 1]
    //Output: The day before the current stored day
    string return_previous()
    {
        string temp{};
        switch (current_day)
        {
        case 0:
            temp = s_days[6];
            break;
        default:
            temp = s_days[current_day - 1];
        }
        return temp;
    }
};
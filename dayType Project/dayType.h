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

    dayType(int temp) :
        current_day{ temp }
    {
    }
    void add_days(const int i)
    {
        current_day = (current_day + i) % 7;
    }
    void print_day()
    {
        cout << s_days[current_day];
    }
    string return_future(int j)
    {
        string temp{};
        temp = s_days[(current_day + j) % 7];
        return temp;
    }
    string return_present()
    {
        string temp{};
        temp = s_days[current_day];
        return temp;
    }
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
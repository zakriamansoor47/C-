#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    cout << endl
         << "..:|>>> Clock and Calender <<<|:.." << endl
         << endl;
    int h, m, s, day, month, year, am, err;
    err = am = 0;
    string str;
start:
    while (err == 0)
    {
        cout << "Enter Hours in 24 Hours Format : ";
        cin >> h;
        cout << "Enter Minutes : ";
        cin >> m;
        cout << "Enter Seconds : ";
        cin >> s;
        cout << "Time is AM or PM : ";
        cin >> str;
    wrong:
        if (str == "PM" || str == "AM")
        {
            if (h < 12 && str == "PM")
            {
                str = "AM";
                cout << "Your entered time hours match AM. So, PM is changed to AM automatically." << endl;
            }
            else if (h > 11 && str == "AM")
            {
                str = "PM";
                cout << "Your entered time hours match PM. So, AM is changed to PM automatically." << endl;
            }
            cout << "Enter Days : ";
            cin >> day;
            cout << "Enter Months : ";
            cin >> month;
            cout << "Enter Years : ";
            cin >> year;
            if (h < 24 && m < 60 && s < 60)
            {
                err++;
            }
            system("cls");
        }
        else
        {
            cout << "Please Enter a vaild Time. Error : AM/PM not found or incorrect!" << endl;
            cin >> str;
            goto wrong;
        }
    }
    while (am == 0)
    {

        if (s > 59)
        {
            s = 00;
            m++;
        }
        if (m > 59)
        {
            m = 00;
            h++;
        }
        if (h == 12 && str == "AM")
        {
            str = "PM";
        }
        else if (h >= 24 && str == "PM")
        {
            str = "AM";
            h = 00;
            day++;
        }
        if (day > 31)
        {
            day = 01;
            month++;
        }
        if (month > 12)
        {
            month = 01;
            year++;
        }
        if (month == 2 && day > 28)
        {
            month++;
            day = 01;
        }
        else if (month == 4 && day > 30)
        {
            month++;
            day = 01;
        }
        else if (month == 6 && day > 30)
        {
            month++;
            day = 01;
        }
        else if (month == 9 && day > 30)
        {
            month++;
            day = 01;
        }
        else if (month == 11 && day > 30)
        {
            month++;
            day = 01;
        }
        system("cls");
        cout << endl
             << "    ..:|>>> Clock and Calender <<<|:..     " << endl
             << endl;
        cout << ">>>>>>>>>>>>>  " << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m << ":" << (s < 10 ? "0" : "") << s << " " << str << "  <<<<<<<<<<<<"<< endl;
        cout << ">>>>>>>>>>>>>   " << (day < 10 ? "0" : "") << day << "/" << (month < 10 ? "0" : "") << month << "/" << (year < 10 ? "0" : "") << year <<"  <<<<<<<<<<<<"<< endl;
        Sleep(1000);
        s++;
    }

    return 0;
}
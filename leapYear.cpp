#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year: " << flush;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << year << " is a leapyear" << endl;
    }
    else if (year % 100 == 0)
    {
        cout << year << " is not a leapyear" << endl;
    }
    else if (year % 4 == 0)
    {
        cout << year << " is a leapyear" << endl;
    }
    else
    {
        cout << year << " is not a leapyear" << endl;
    }
    return 0;
}
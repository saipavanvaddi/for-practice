// LeapYear.cpp
// leap year equation fixed
#include <iostream>
using namespace std;

int main() {

    int year;
    cout << "Enter a year: ";
    cin >> year;
    // fixed leap year logic
if(year %100==0){
    if(year%400==0){
        cout << year << " is a leap year";
    }
    else 
    {
        cout << year << " is not a leap year";
    }
    
}
else  {
    if (year%4==0)
        cout << year << " is a leap year.";
    else
        cout << year << " is not  leap year.";
    }
    return 0;
}


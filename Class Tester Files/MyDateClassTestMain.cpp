#include <iostream>
#include "MyDate.h"

using namespace std;

int main()
{
    ///Testing new .getCurrentDate() function
    MyDate testDate( 0, 0, 0 );
    testDate = testDate.getCurrentDate();
    cout << testDate.getMonth() << endl;
    cout << testDate.getDay() << endl;
    cout << testDate.getYear() << endl;
    cout << testDate.toString() << endl;
}

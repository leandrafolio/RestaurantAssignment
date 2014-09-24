#include <iostream>
#include "MyTime.h"

using namespace std;

int main()
{
    ///Testing new .getCurrentTime() function
    MyTime testTime( 0, 0, 0 );
    testTime.setTime( testTime.getCurrentTime() );
    cout << testTime.getHour() << endl;
    cout << testTime.getMinute() << endl;
    cout << testTime.getSecond() << endl;
    cout << testTime.toString() << endl;

    return 0;
}

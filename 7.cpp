#include <iostream>

using namespace std;

int main()
{
    int seconds, minutes, hours, days;

    cout << "Enter seconds: ";
    cin >> seconds;

    minutes = seconds / 60;
    hours = seconds / 3600;
    days = seconds / 86400;

    if (seconds >= 60){
      cout << minutes << " minute(s)\n";

   if (seconds >= 3600) {
        cout << hours <<" hour(s)\n";


   if (seconds >= 86400) {
        cout << days << " day(s) \n";
   }
   }
    }

    return 0;
}

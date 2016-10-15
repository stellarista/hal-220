#include <iostream>

using namespace std;

int main()
{
    int month;
    int year;
   // int leapYear;
    cout << "Enter a month (1-12): "<<endl;
    cin >> month;
    cout << "Enter a year: "<<endl;
    cin >> year;

    if (month == 2) {
        if (year % 4 == 0){
        cout << "29 days" << endl;
        }
        else {
            cout << "28 days" <<endl;
        }
    }

    else if(month == 1) {
        cout << "31 days" << endl;
    }

    else if(month == 3) {
        cout << "31 days" << endl;
    }

    else if (month == 4) {
        cout << "30 days" << endl;
    }
    else if(month == 5) {
        cout << "31 days" << endl;
    }
    else if(month == 6) {
        cout << "30 days" << endl;
    }
    else if(month == 7) {
        cout << "31 days" << endl;
    }
    else if(month == 8) {
        cout << "31 days" << endl;
    }
    else if(month == 9) {
        cout << "30 days" << endl;
    }
    else if(month == 10) {
        cout << "31 days" << endl;
    }
    else if(month == 11) {
        cout << "30 days" << endl;
    }
    else if(month == 12) {
        cout << "31 days" << endl;
    }
// ~,~
    return 0;
}

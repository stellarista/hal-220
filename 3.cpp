#include <iostream>

using namespace std;

int main()
{
    int date, month, year;

    cout << "Enter a date, a month, and a two digit year~" << endl;
    cin >> date;
    cin >> month;
    cin >> year;

    if (date*month == year){
        cout << date <<"/"<<month<<"/"<<year<<endl;
        cout << "It's a magic date! :D"<<endl;
    } else {
    cout << "It's not s magic date :("<<endl;
    }

    return 0;
}

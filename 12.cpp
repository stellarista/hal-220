#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int retailPrice = 99;
    int units;
    cout << "How many units do you want?\n";
    cin >> units;

    if (units >= 10 & units <= 19){
        int totalPrice1 = retailPrice - retailPrice*0.2;
        cout << "Total cost of purchase is $" << totalPrice1 << endl;
    }
    else if (units >=20 & units <= 49){
        int totalPrice2 = retailPrice - retailPrice*0.3;
        cout << "Total cost of purchase is $" << totalPrice2 << endl;
    }
    else if (units >= 50 & units <= 99){
        int totalPrice3 = retailPrice - retailPrice*0.4;
        cout << "Total cost of purchase is $" << totalPrice3 << endl;
    }
    else if (units >= 100){
        int totalPrice4 = retailPrice - retailPrice*0.5;
        cout << "Total cost of purchase is $" << totalPrice4 << endl;
    }


    return 0;
}

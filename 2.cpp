#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter number within the range of 1 through 10" << endl;
    cin >> number;

    switch (number) {

    case 1: cout << "I" << endl;
                        break;
    case 2: cout << "II" << endl;
                        break;
    case 3: cout << "III" << endl;
                        break;
    case 4: cout << "IV" << endl;
                        break;
    case 5: cout << "V" << endl;
                        break;
    case 6: cout << "VI" << endl;
                        break;
    case 7: cout << "VII" << endl;
                        break;
    case 8: cout << "VIII" << endl;
                        break;
    case 9: cout << "IX" << endl;
                        break;
    case 10: cout << "X" << endl;
                        break;
    default: cout << "Ya better try again and read the instruction carefully.";


    }
    return 0;
}

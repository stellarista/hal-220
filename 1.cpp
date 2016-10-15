#include <iostream>

using namespace std;

int main()
{
    int first, second;
    cout << "Enter two numbers.\n";
    cin >> first;
    cin >> second;

    if (first > second) {
    cout << first << " is larger and " << second << " is smaller." <<endl;
    } else {
    cout << second << " is larger and "<< first << " is smaller." << endl;

    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int lengthOne, lengthTwo, widthOne, widthTwo;

    cout << "Enter the first length and width for the first rectangle:\n";
    cin >> lengthOne;
    cin >> widthOne;
    cout << "Enter the second length and width for the second rectangle: \n";
    cin >> lengthTwo;
    cin >> widthTwo;

    int areaOne = lengthOne * widthOne;
    int areaTwo = lengthTwo * widthTwo;
    int rectangleOneIsBigger = areaOne > areaTwo;
    int rectangleTwoIsBigger = areaOne < areaTwo;

    if (rectangleOneIsBigger) {
        cout << "The first rectangle area is greater~";
    }

    if (rectangleTwoIsBigger) {
        cout << "The second rectangle is greater~";
    }

    if (areaOne == areaTwo) {
        cout << "Both area are the same~";
    }
    return 0;
}

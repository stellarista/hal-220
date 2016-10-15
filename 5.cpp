#include <iostream>

using namespace std;
int main()
{
    double weight, height;

    cout << "Enter your weight (lbs)"<<endl;
    cin >> weight;
    cout << "Enter you height (inch)"<<endl;
    cin >> height;

    double bmi;
    bmi = weight * 703 / height * height;

cout << "Your bmi is " << bmi <<endl;

    if (bmi < 18.5) {
        cout << "you're underweight";
    }

    if (bmi > 25 ) {
        cout << "you're overweight";
    }

    if (18.5 >= bmi >= 25 ) {
        cout << "Nice, you're optimal~";
    }

    return 0;
}

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
unsigned seed = time (0);
srand(seed);
int total;
int randomNumber = rand() % (999-100+1)+100;
int randomNumber1 = rand() % (999-100+1)+100;
cout << setw(8) << randomNumber << endl;
cout << setw(8) << randomNumber1 << endl;
cout << setw(8)<<"+_____" << endl;
cin >> total;
if (total==randomNumber+randomNumber1)
{
    cout << "CONGRATZ";
}
else {cout << randomNumber+randomNumber1;}
    return 0;
}

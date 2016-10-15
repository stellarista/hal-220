#include <iostream>
#include <string>

using namespace std;

int main()
{
string colorOne = "";
string colorTwo = "";

cout << "Enter two primary colors~"<<endl;
cin >> colorOne;
cin >> colorTwo;

     if (colorOne=="red"){
        if (colorTwo == "blue"){
            cout << "purple" << endl;
        }
        else if (colorTwo == "yellow"){
            cout << "orange" << endl;
        }
        else if (colorTwo != "blue" || "yellow") {
            cout << "error" <<endl;
        }
    }
    else if (colorOne == "blue"){
        if (colorTwo == "red"){
            cout << "purple" << endl;
        }
        else if (colorTwo == "yellow"){
            cout << "green" << endl;
        }
        else if (colorTwo != "red" || "yellow") {
            cout << "error" <<endl;
        }
    }
    else if (colorOne == "yellow"){
        if (colorTwo == "red"){
            cout << "orange" << endl;
        }
        else if (colorTwo == "blue"){
            cout << "green" << endl;
        }
        else if (colorTwo != "blue" || "red") {
            cout << "error" <<endl;
        }
    }
    else if (colorOne != "red" || "blue" || "yellow"){
        cout << "error" <<endl;
    }

    return 0;
}

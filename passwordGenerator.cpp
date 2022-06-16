#include <iostream>

using namespace std;


int main()
{

    srand(time(0));
    string pass;

    string data = "abcdefghijklmnopqrstuvwxyz"
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
           "!£$%^&*()@#";

    for (int i = 1; i <= 12; i++) {

        pass = pass + data[rand() % 93];

        cout << pass;


    }
}

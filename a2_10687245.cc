/* CSCD 205 Assignment 2
* write a c++ program to determine whether a numbber in prime or not
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    bool checkPrime = true;

    cout << "Enter your positive number to check if it is a prime number  \n" << endl;
    cin >> num;

    for (int i=2; i < num; i++) { //start from 2 because 1 is not a prime number,
        if(num % i == 0) {
            checkPrime = false;
            break;
        }
    }

    if (!checkPrime) {
        cout << num << " is not a prime number." << endl;
    } else {
        cout << num << " is a prime number." << endl;
    }

    return 0;
}

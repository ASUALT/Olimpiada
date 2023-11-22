#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int fullNumber;

    cout << "Enter 3 digit number: ";
    cin >> fullNumber;

    int originalNumber = fullNumber;
    int digitCount = 0;
    int sum = 0;

    while (fullNumber > 0) {
        int digit = fullNumber % 10;
        sum += pow(digit, 3);
        fullNumber /= 10;
        digitCount++;
    }
    if (sum == originalNumber)
    {
        cout << originalNumber << " is Armstrong number" << endl;
    } else {
        cout << originalNumber << " isn't Armstrong number" << endl;
    }
    return 0;

}


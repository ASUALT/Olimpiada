#include <iostream>

using namespace std;

int main()
{
    int A;
    cout << "Enter 4 digit number: ";
    cin >> A;

    int reversedA = 0;
    int temp = A;

    // reversing number
    while (temp > 0)
    {
        reversedA = reversedA * 10 + temp % 10;
        temp /= 10;
    }

    int sum = A + reversedA;
    cout << sum << endl;

    return 0;
}

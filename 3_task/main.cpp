#include <iostream>
#include <cmath>

using  namespace std;

int main() {
    int sneakerCost = 4000;

    // bursary > outLay, savings < sneakers cost
    float savings, bursary, outLay, amountOfMounth;
    float priceRise = 0.05;

    cout << "Enter savings: ";
    cin >> savings;

    cout << "Enter monthly Scholarship: ";
    cin >> bursary;

    cout << "Enter monthly expenses: ";
    cin >> outLay;

    // calculating
    int months = 0;
    while (savings < sneakerCost)
    {
        outLay += outLay * priceRise; // calculate sneakers monthly rising
        savings += bursary - outLay; // calculate savings

        months++;
        cout << savings<< " " << outLay << endl;

        if (savings < 0)
        {
            cout << "Artem cant buy sneakers." << endl;
            return 0;
        }
    }

    cout << "Artem can buy sneakers after " << months << " month." << endl;

    return 0;
}

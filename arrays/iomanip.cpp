#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Financial report example
    double income = 123456.789;
    double expenses = 98765.432;

    cout << "Financial Report" << endl;
    cout << "================" << endl;
    cout << left << setw(10) << "Income: " << right << setw(15) << fixed << setprecision(2) << income << endl;
    cout << left << setw(10) << "Expenses: " << right << setw(15) << fixed << setprecision(2) << expenses << endl;

    // Scientific report example
    double measurement = 123456.789123456;
    cout << "Scientific Report" << endl;
    cout << "=================" << endl;
    cout << "Measurement: " << scientific << setprecision(9) << measurement << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to Our Banking Services(OBS). \n\n";
    double amount;
    cout << "What is your starting balance? \n >>";
    cin >> amount;
    int withdraw = 1;
    while(withdraw) {
        cout << "How much do you wish to withdraw? (0 to exit) \n >>";
        cin >> withdraw;
        if(withdraw % 5 == 0 && withdraw < amount) {
            amount = amount - withdraw - 0.50;
        } else {
            cout << "\nInvalid input. Input mod 5 must equal 0, and Input must also be less than balance.\n\n";
            withdraw = 1;
        }
        cout << "Your new amount is: ";
        cout << amount << '\n';
    }
    cout << "\n\n Thank you for using OBS. Enter any value to exit.\n\n";
    string exitValue;
    cin >> exitValue;    
}
#include "CommandRegistry.h"
#include <iostream>
#include <string>

using namespace std;

void handleDigitCode() {
    cout << "Введите строку с цифрами: ";
    string s;
    getline(cin, s);

    for (char c : s) {
        if (c >= '0' && c <= '9') {
            cout << "Цифра '" << c << "' код = " << (int)c << endl;
        } else {
            cout << "Символ '" << c << "' не является десятичной цифрой\n";
        }
    }
}

REGISTER_COMMAND(3, "Код десятичной цифры", handleDigitCode);
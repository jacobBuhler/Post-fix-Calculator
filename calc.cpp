#include "dstack.h"
#include <iostream>
#include <cctype>
#include <cmath>
#include <cstdlib>

using namespace std;

void throwError() {
    cerr << "Error: Invalid expression." << endl;
    exit(1);
}

double performOperation(char op, double a, double b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) throwError();
            return a / b;
        case '^': return pow(a, b);
        default: throwError();
    }
    return 0;
}

int main() {
    Dstack stack;
    char nextChar;
    double number, a, b, result;

    while (cin >> ws, !cin.eof()) {
        if (isdigit(cin.peek()) || cin.peek() == '.') {
            cin >> number;
            if (cin.fail()) throwError();
            stack.push(number);
            if(cin.peek() == '.'){throwError();}
        } else {
            cin >> nextChar;
            if (!stack.pop(b) || !stack.pop(a)) throwError();
            result = performOperation(nextChar, a, b);
            stack.push(result);
        }
    }

    if (stack.size() == 1 && stack.pop(result)) {
        cout << result << endl;
    } else {
        throwError();
    }

    return 0;
}

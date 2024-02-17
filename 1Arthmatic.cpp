#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char symbol;
    double number1, number2;

    cout << "Welocme to the Calculator " << endl;

    cout << "Enter What you Want to do (+ - * / % )";
    cin >> symbol;

    cout << "Enter the two Number One by one" << endl;
    cin >> number1 >> number2;

    switch (symbol)
    {
    case '+':
        cout << number1 << " " << symbol << " " << number2 << " = " << number1 + number2 << endl;
        break;

    case '-':
        cout << number1 << " " << symbol << " " << number2 << " = " << number1 - number2 << endl;
        break;

    case '*':
        cout << number1 << " " << symbol << " " << number2 << " = " << number1 * number2 << endl;
        break;

    case '/':
    {
        if (number2 == 0)
            cout << "Devide by " << number2 << " is Undefine";
        else
            cout << number1 << " " << symbol << " " << number2 << " = " << number1 / number2 << endl;
    }
    break;

    default:
    {
        cout << "Invalid INPUT" << endl;
    }
    break;
    }

    return 0;
}
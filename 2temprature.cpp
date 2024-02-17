#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Welocme to the Calculator " << endl;

    cout << "Press 1 For ( + - * / % )" << endl;
    cout << "Press 2 For Temprature " << endl;
    int check;
    cin >> check;

    if (check == 1)
    {
        char symbol;
        double number1, number2;

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
    }
    else if (check == 2)
    {
        cout << "Press 1 For Fahrenheit to Celsius" << endl;
        cout << "Press 2 For Celsius to Fahrenheit" << endl;

        int temp_check;
        cin >> temp_check;
        float temperature;
        cout << "Enter the Temperature in Required unit" << endl;
        cin >> temperature;

        switch (temp_check)
        {
        case 1:
            cout << temperature << " Degree Fahrenheit = " << (temperature - 32) * 5 / 9 << " Degree Celsius" << endl;
            break;
        case 2:
            cout << temperature << " Degree Celsius = " << (temperature * 9 / 5) + 32 << " Degree Fahrenheit" << endl;
            break;
        default:
            cout << "Invalid INPUT" << endl;
            break;
        }
    }

    return 0;
}
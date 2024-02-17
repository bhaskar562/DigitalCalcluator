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

    else if (check == 3)
    {
        cout << "Press 1 for Rupee to Dollar" << endl;
        cout << "Press 2 for Dollar to Rupee" << endl;
        cout << "Press 3 for Rupee to Euro" << endl;
        cout << "Press 4 for Euro to Rupee" << endl;
        int Currency_check;
        cin >> Currency_check;
        float currency;
        cout << "Enter the Currency in Required unit" << endl;
        cin >> currency;
        switch (Currency_check)
        {
        case 1:
            cout << currency << " Rupees = " << currency * 0.012 << " Dollar" << endl;
            break;
        case 2:
            cout << currency << " Dollar = " << currency * 82.99 << " Rupees" << endl;
            break;
        case 3:
            cout << currency << " Rupees = " << currency * 0.011 << " Euro" << endl;
            break;
        case 4:
            cout << currency << " Euro = " << currency * 89.43 << " Rupees" << endl;
            break;
        default:
            cout << "Invalid INPUT" << endl;
            break;
        }
    }

    return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Welcome to the Calculator" << endl;

    cout << "Press 1 For ( + - * / % )" << endl;
    cout << "Press 2 For Temperature" << endl;
    cout << "Press 3 For Currency Conversion" << endl;
    cout << "Press 4 For Trigonometric Functions" << endl;

    int check;
    cin >> check;

    if (check == 1)
    {
        char symbol;
        double number1, number2;

        cout << "Enter What you Want to do (+ - * / % )";
        cin >> symbol;

        cout << "Enter the two Numbers One by one" << endl;
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
            {
                cout << "Divide by " << number2 << " is Undefined";
            }
            else
            {
                cout << number1 << " " << symbol << " " << number2 << " = " << number1 / number2 << endl;
            }
            break;
        }
        default:
            cout << "Invalid INPUT" << endl;
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
    else if (check == 4)
    {
        cout << "Press 1 for find the angle of SINE(sin)" << endl;
        cout << "Press 2 for find the angle of COSINE(cos)" << endl;
        cout << "Press 3 for find the angle of TANGENT(tan)" << endl;
        cout << "Press 4 for find the angle of COSECANT(cosec)" << endl;
        cout << "Press 5 for find the angle of SECANT(sec)" << endl;
        cout << "Press 6 for find the angle of COTANGENT(cot)" << endl;

        int trego_check;
        cin >> trego_check;

        cout << "Enter the Angle to find the Value" << endl;
        float angle;
        cin >> angle;
        float red_angle = angle * 3.1415928 / 180;

        switch (trego_check)
        {
        case 1:
            cout << "The Value of Sin(" << angle << " degrees) = " << sin(red_angle);
            break;
        case 2:
            cout << "The Value of Cos(" << angle << " degrees) = " << cos(red_angle);
            break;
        case 3:
            cout << "The Value of Tan(" << angle << " degrees) = " << tan(red_angle);
            break;
        case 4:
            cout << "The Value of Cosec(" << angle << " degrees) = " << 1.0 / sin(red_angle);
            break;
        case 5:
            cout << "The Value of Sec(" << angle << " degrees) = " << 1.0 / cos(red_angle);
            break;
        case 6:
            cout << "The Value of Cot(" << angle << " degrees) = " << 1.0 / tan(red_angle);
            break;
        default:
            cout << "Invalid INPUT" << endl;
            break;
        }
    }

    return 0;
}

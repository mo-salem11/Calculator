#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
void enterData();
inline double Add(double, double);
inline double Subtract(double, double);
inline double Multiply(double, double);
inline double Divide(double, double);
inline int Modulus(int, int);
inline double power(double, double);
void operation(double, char, double);

int main()
{
    char yn;
    do
    {
        enterData();
        cout << "If you want to repeat the operation, choose Y. Else choose N (y/n): ";
        cin >> yn;
        cout << endl;
    } while (yn == 'y' || yn == 'Y');

    return 0;
}

void enterData()
{
    double num1, num2;
    char op;

    cout << "Please enter two valid numbers followed by a valid operation (+, -, *, /, %, ^): ";
    while (!(cin >> num1 >> op >> num2))
    {
        cout << "\aYou should enter valid numbers and an operator: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    operation(num1, op, num2);
}

void operation(double num1, char op, double num2)
{
    switch (op)
    {
        case '+':
            cout << "The addition of the two numbers is: " << Add(num1, num2) << endl;
            break;
        case '-':
            cout << "The subtraction of the two numbers is: " << Subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "The multiplication of the two numbers is: " << Multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "The division of the two numbers is: " << Divide(num1, num2) << endl;
            break;
        case '%':
            if (num2 != 0)
                cout << "The modulus of the two numbers is: " << Modulus(static_cast<int>(num1), static_cast<int>(num2)) << endl;
            else
                cout << "Error: Division by zero is not allowed for modulus operation." << endl;
            break;
        case '^':
            cout << "The power of the two numbers is: " << power(num1, num2) << endl;
            break;
        default:
            cout << "\aPlease enter a valid arithmetic operator." << endl;
            enterData();
            break;
    }
    cout << endl;
}

inline double Add(double num1, double num2)
{
    return num1 + num2;
}

inline double Subtract(double num1, double num2)
{
    return num1 - num2;
}

inline double Multiply(double num1, double num2)
{
    return num1 * num2;
}

inline double Divide(double num1, double num2)
{
    if (num2 == 0)
    {
        cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
    return num1 / num2;
}

inline int Modulus(int num1, int num2)
{
    return num1 % num2;
}

inline double power(double num1, double num2)
{
    return pow(num1, num2);
}

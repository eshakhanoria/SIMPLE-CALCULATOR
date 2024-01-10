#include <iostream>
using namespace std;
void calculate(double Number1, double Number2, char operation)
{
    switch (operation)
    {
    case '+':
        cout << " Result : " << Number1 + Number2 << endl;
        break;
    case '-':
        cout << " Result : " << Number1 - Number2 << endl;
        break;
    case '*':
        cout << " Result : " << Number1 * Number2 << endl;
        break;
    case '/':
        if (Number2 == 0)
        {
            cout << " Division invalid " << endl;
        }
        else
        {
            cout << " Result : " << Number1 / Number2 << endl;
        }
        break;
    default:
        cout << "Operation is not valid";
    }
}
int main()
{
    double Number1, Number2;
    char operation;
    cout << " Enter Number 1 :  ";
    cin >> Number1;
    cout << " Enter Number 2 :  ";
    cin >> Number2;
    cout << " Operation to Carry ->(+,-,*,/) : ";
    cin >> operation;
    calculate(Number1, Number2, operation);
    return 0;
}

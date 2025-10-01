#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout << "enter the numbers" << endl;
    cin >> a;
    cin >> b;

    char button;
    cout << "enter the operator which you want to perform" << endl;
    cin >> button;

    switch (button)
    {

    case '+':
        cout << (a + b);
        break;

    case '-':
        cout << (a - b);
        break;

    case '*':
        cout << (a * b);
        break;

    case '/':
        cout << (a / b);
        break;

    case '%':
        cout << (a % b);
        break;

    default:
        cout << "invalid input";
        break;
    }

    return 0;
}
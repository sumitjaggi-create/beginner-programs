#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;

    int reversed = 0;
    int n = num;

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;

        n = n / 10;
    }
    if (num == reversed)
    {
        cout << "no. is palindrone";
    }
    else
    {
        cout << "no. is not palindrone";
    }
}
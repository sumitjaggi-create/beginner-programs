#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {

            cout << j << " ";
        }

        for (int k = 1; k <= i; k++)
        {

            cout << "* ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        for (int p = n - i; p >= 1; p--)
        {
            cout << p << " ";
        }

        cout << endl;
    }
}
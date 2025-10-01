#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 1;
    int j = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
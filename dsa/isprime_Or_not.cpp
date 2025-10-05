#include <iostream>
using namespace std;

void is_prime(int num)
{
    bool isprime = 1;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
        }
    }
    if (isprime)
    {
        cout << "it is a prime no.";
    }
    else
    {
        cout << "it is not a prime no. ";
    }
}

int main()
{
    int n;
    cout << "enter the no. " << endl;
    cin >> n;

    if (n == 0 || n == 1 || n < 0)
    {
        cout << "enter other numbers";
        return 0;
    }

    is_prime(n);
    return 0;
}
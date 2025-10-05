#include <iostream>
using namespace std;

long long factorial(int num)
{

    long long ans = 1;
    for (int i = 1; i <= num; i++)
    {

        ans = ans * i;
    }
    return ans;
}

int main()
{
    long long n, r;
    
    cout << "enter the value of n" << endl;
    cin >> n;

    cout << "enter the value of r" << endl;
    cin >> r;

    long long diff = n - r;

    if(r>n){
        cout<<"invalid entries";
        return 0;
    }

    long long factorial_of_n = factorial(n);
    long long factorial_of_diff = factorial(diff);
    long long factorial_of_r = factorial(r);

    long long n_C_r = (factorial_of_n) / (factorial_of_diff * factorial_of_r);
    cout << n_C_r;
}
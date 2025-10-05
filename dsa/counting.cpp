#include <iostream>
using namespace std;

void print_counting(int num)
{

    for (int i = 1; i <= num; i++)
    {
        cout << i<<endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print_counting(n);
}
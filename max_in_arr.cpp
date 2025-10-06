#include <iostream>
using namespace std;

int find_max(int arr[], int size)
{

    int i = 0;
    int great = arr[0];
    cout << "any problem" << endl;
    while (i < size)
    {
        if (great > arr[i])
        {
            great = arr[i];
        }
        i++;
    }

    return great;
}

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << find_max(arr, n);
}
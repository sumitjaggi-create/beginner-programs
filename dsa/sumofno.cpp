#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"enter the number"<<endl;
    cin>>a;

    int sum = 0;

    cout<<"sum of the A.P. is "<<endl;
    for(int i=1; i<=a; i++){
        sum= sum+i;
    }
    cout<<sum;
    return 0;
}
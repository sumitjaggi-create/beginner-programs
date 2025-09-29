#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the no."<<endl;
    cin>>a;
    cout<<"following is the no. series up to "<<a<<endl;

    for(int i=1; i<=a; i++){
        cout<<i<<endl;
    }
    return 0;
}
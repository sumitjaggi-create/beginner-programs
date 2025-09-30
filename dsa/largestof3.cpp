#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int c;

    cin>>a;
    cin>>b;
    cin>>c;

    if(a>=b && a>=c){
        cout<<a<<" is the greatest ";
    }
    else if(b>=a && b>=c){
        cout<<b<<"  is the greatest ";

    }
    else{
        cout<<c<<" is the greatest";
    }
    return 0;
}
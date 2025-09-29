#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"enter the no."<<endl;
    cin>>a;

    if(a==0){
        cout<<"factorial of no. is "<<1<<endl;
    }
    else {
        int multi =1;
        cout<<"factorial of no. is "<<endl;
        for(int i=1; i<= a; i++){
            multi = multi*i;
        }
        cout<<multi;
    }
}
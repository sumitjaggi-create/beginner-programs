#include<iostream>
using namespace std;

void checkEvenOrOdd(int num){
    
    if(num%2==0){
        cout<<"it is even no.";
    }
    else{
        cout<<"it is odd no.";
    }
}

int main(){
    int num;
    cout<<"enter the no."<<endl;
    cin>>num;
    checkEvenOrOdd(num);

    return 0;
}
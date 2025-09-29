#include<iostream>
using namespace std;

int main(){
    int a = 5;

    int x = 0;
    int y = 1;

    
    for(int i=0; i<a; i++){
       int sum = (x+y);
       x=y;
       y=sum;

       cout<<sum<<endl;
    }
}
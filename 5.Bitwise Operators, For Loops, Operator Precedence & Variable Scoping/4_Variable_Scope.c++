#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<a<<endl;

    if(true){
        cout<<a<<endl;
    }
    if(true){
        int b=6;  // scope of b in the if block only - local variable
        cout<<b<<endl;

    }
    // cout<<b<<endl; // b is not declared error due to the scope

    int i=8;
    for ( int i = 0; i < 8; i++)
    {
        cout<<"HI"<<endl;
    }
    
}
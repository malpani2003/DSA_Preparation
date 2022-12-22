#include<iostream>
using namespace std;
int main(){
    int ch;
    ch=cin.get();
    if(ch>=48 && ch<=57){
        cout<<"It is a Digit";
    }
    else if(ch>=65 && ch<=90){
        cout<<"It is a Uppercase";
    }
    else if(ch>=97 && ch<=122){
        cout<<"It is a Lower";
    }
}
// and - &
// or - |
// Not - ~
// Xor - ^
#include<iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a;
    cin>>b;
    cout<<"a and b : "<<(a&b)<<endl;
    cout<<"a or b : "<<(a|b)<<endl;
    cout<<"a xor b : "<<(a^b)<<endl;
    cout<<"not a not b : "<<~a<<~b;


    // Left shift and right shift
    int c=5;
    cout<<"Left shift 5 by 2 : "<<(3<<2)<<endl;
    return 0;
}

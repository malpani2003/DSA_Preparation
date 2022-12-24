
#include<iostream>
using namespace std;
int main(){
    
    int i=4;
    int a=i++;
    cout<<a<<endl; // 4
    cout<<i<<endl; // 5
    a=++i;  
    cout<<a<<endl; // 6
    cout<<i<<endl;// 6
    
    a=i--;
    cout<<a<<endl; // 6
    cout<<i<<endl; // 5
    a=--i;  
    cout<<a<<endl; // 4
    cout<<i;// 4
}

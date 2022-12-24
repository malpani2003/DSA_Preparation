#include<iostream>
#include<string.h>
using namespace std;
int main(){

    // char n[100];
    int n;
    cin>>n;
    // cout<<n;
    int sum=0,product=1;
    while(n!=0){
        int a=n%10;

        // cout<<a<<endl;
        n=n/10;
        sum+=a;
        product*=a;

    }
    cout<<sum<<" "<<product<<endl;

}
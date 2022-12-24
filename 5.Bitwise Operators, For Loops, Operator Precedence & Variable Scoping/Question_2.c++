#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int binary=0,multiplier=1;
    while(n!=0){
       int rem=n%2;
       cout<<rem<<" ";
    //    binary+=(multiplier+rem);
    //    multiplier*=10;
//   binary.append(rem);
       if(rem==1){
         count++;
       }
       n=n/2;
    }
    cout<<endl<<count<<endl<<binary;
}
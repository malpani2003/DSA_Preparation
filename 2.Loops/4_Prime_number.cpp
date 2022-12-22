#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=n-1,flag=0;
    while(i>=2){
        if(n%i!=0){  // Divide nahi to Prime;
            flag=1;
        }
        else{    // Divide ho to
            flag=0;
            break;
        }
        i=i-1;
    }
    // cout<<"\nSum of even number : "<<sum<<endl;
    if(flag==1){
        cout<<n<<" is a Prime Number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
}
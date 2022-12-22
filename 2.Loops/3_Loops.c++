#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1,sum=0;
    // while loop
    while(i<=n){
        cout<<i<<"  ";
        if(i%2==0){
           sum+=i;
        }
        i=i+1;
    }
    cout<<"\nSum of even number : "<<sum<<endl;
   
   // for loop

   cout<<endl<<"counting to n using for loop"<<endl;
   for(int j=0;j<=n;j++){
        cout<<j<<" ";
   }

   int f;
   cout<<endl<<"Enter fibonacii variable"<<endl;
   cin>>f;
   int first_num=0,second_letter=1;
   cout<<first_num<<" "<<second_letter<<" ";
   for(i=1;i<=f;i++){
    int sum=first_num+second_letter;
       cout<<sum<<" ";
       first_num=second_letter;
       second_letter=sum;
   }

}
#include <iostream>
using namespace std;
int main()
{

    // Pattern - 1
    int i = 1, n, j;
    cin >> n;
    cout<<endl<<"Pattern-1"<<endl;
    while (i <= n)
    {
        j = 1;
        while(j<=i){
            cout<<" * ";
            j+=1;
        }
        cout<<"\n";
        i += 1;
    }

    // Pattern - 2
    i = 1;
    cout<<endl<<"Pattern-2"<<endl;
    while (i <= n)
    {
        j = 1;
        while(j<=i){
            // cout<<" * ";
            cout<<" "<<i<<" "; 
            j+=1;
        }
        cout<<"\n";
        i += 1;
    }


    // Pattern - 3
    i = 1;
    cout<<endl<<"Pattern-3"<<endl;
    while (i <= n)
    {
        j = 0;
        while(j<i){
            cout<<" "<<i+j<<" "; 
            j+=1;
        }
        cout<<"\n";
        i += 1;
    }


    
    // Pattern - 4
    i = 1;
    cout<<endl<<"Pattern-4"<<endl;
    while (i <= n)
    {
        j = i;
        while(j>=1){
            cout<<" "<<j<<" "; 
            j-=1;
        }
        cout<<"\n";
        i += 1;
    }
}
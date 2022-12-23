#include <iostream>
using namespace std;
int main()
{

    // Pattern - 1
    int i = 1, n, j;
    cin >> n;
    cout<<endl<<"Parttern-1"<<endl;
    while (i <= n)
    {
        j = 1;
        while(j<=n){
            cout<<" * ";
            j+=1;
        }
        cout<<"\n";
        i += 1;
    }

    // Pattern - 2
    cout<<endl<<"Parttern-2"<<endl;

     i=1; // Next Pattern ke liye kiya
     while (i <= n)
    {
        j = 1;
        while(j<=n){
            cout<<" "<<i<<" ";
            j+=1;
        }
        cout<<"\n";
        i += 1;
    }

    // Pattern-3
    i=1;
    cout<<endl<<"Parttern-3"<<endl;
    // for(i=0;i<n;i++)
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<" "<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i+=1;

    }
// Pattern-4
    i=1;
    cout<<endl<<"Parttern-4"<<endl;
    // for(i=0;i<n;i++)
    while(i<=n){
        j=n;
        while(j>=1){
            cout<<" "<<j<<" ";
            j=j-1;
        }
        cout<<endl;
        i+=1;

    }

// Pattern-5
    cout<<endl<<"Pattern-5"<<endl;
    // for(i=0;i<n;i++)
        // j=1;
    i=1;
    while(i<=(n*n)){
        j=1;
        while(j<=n){
            cout<<" "<<i<<" ";
            j=j+1;
            i+=1;
        }
        cout<<endl;
        // i+=1;

    }

}
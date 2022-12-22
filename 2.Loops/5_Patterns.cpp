#include <iostream>
using namespace std;
int main()
{

    // Pattern - 1
    int i = 1, n, j;
    cin >> n;
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
}
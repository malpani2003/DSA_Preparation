#include <iostream>
using namespace std;
int main()
{
    // Pattern - 1
    int i = 0, n, j, space;
    cin >> n;
    cout << endl
         << "Pattern-1" << endl;
    while (i < n)
    {
        space = n - i-1;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        j = 1;
        while (j <= (2 * i + 1))
        {
            // if(j<)
            cout <<"*";
            j += 1;
        }
        space = n - i-1;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        cout << "\n";
        i += 1;
    }

     // Pattern - 2
    i = 0;
    cout << endl
         << "Pattern-2" << endl;
    while (i < n)
    {
        j = 1;
        while (j <= n-i)
        {
            cout <<j;
            j += 1;
        }
        int number_star=0;
        while(number_star<i*2){
            cout<<"*";
            number_star+=1;
        }
        j = n-i;
        while (j >= 1)
        {
            cout <<j;
            j -= 1;
        }
        cout << "\n";
        i += 1;
    }
}

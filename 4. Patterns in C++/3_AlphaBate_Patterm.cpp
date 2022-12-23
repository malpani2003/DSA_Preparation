#include <iostream>
using namespace std;
int main()
{

    // Pattern - 1
    int i = 1, n, j;
    cin >> n;
    cout << endl<< "Pattern-1" << endl;
    int intial_char = 'A';
    while (i <= n)
    {
        j = 1;
        char char_value = intial_char;
        while (j <= n)
        {
            cout << " " << char_value << " ";
            j += 1;
        }
        cout << "\n";
        i += 1;
        intial_char += (1);
    }

    
    // Pattern - 2
    i = 1; 
    cout << endl<< "Pattern-2" << endl;
    intial_char = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            char char_value = (intial_char+j-1);
            cout << " " << char_value << " ";
            j += 1;
        }
        cout << "\n";
        i += 1;
        intial_char += (1);
    }

    
    // Pattern - 3
    i = 1; 
    cout << endl<< "Pattern-3" << endl;
    intial_char = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            char char_value = (intial_char+j-1);
            cout << " " << char_value << " ";
            j += 1;
        }
        cout << "\n";
        i += 1;
        // intial_char += (1);
    }

    // Pattern - 4
    i = 1; 
    cout << endl<< "Pattern-4" << endl;
    intial_char = 'A';
    while (i <= n)
    {
        j = 1;
        char char_value = (intial_char+n-1);
        while (j <= i)
        {
            cout << " " << char_value << " ";
            j += 1;
        }
        cout << "\n";
        i += 1;
        intial_char -= (1);
    }
}
#include <iostream>
using namespace std;
int main()
{
    // Pattern - 1
    int i = 1, n, j, space;
    cin >> n;
    cout << endl
         << "Pattern-1" << endl;
    while (i <= n)
    {
        space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        j = 1;
        while (j <= i)
        {
            cout <<"*";
            j += 1;
        }

        cout << "\n";
        i += 1;
    }

    i = 1;
    // cin >> n;
    cout << endl
         << "Pattern-2" << endl;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j += 1;
        }
        space = i - 1;
        while (space)
        {
            cout << " ";
            space -= 1;
        }

        cout << "\n";
        i += 1;
    }

    i = 1;
    // cin >> n;
    cout << endl
         << "Pattern-3" << endl;
    while (i <= n)
    {
        space = i - 1;
        while (space)
        {
            cout << " ";
            space -= 1;
        }

        j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j += 1;
        }
        cout << "\n";
        i += 1;
    }

    i = 1;
    // cin >> n;
    cout << endl
         << "Pattern-4" << endl;
    while (i <= n)
    {
        space = i - 1;
        while (space)
        {
            cout << " ";
            space -= 1;
        }

        j = 1;
        while (j <= n - i + 1)
        {
            cout << j + i - 1;
            j += 1;
        }
        cout << "\n";
        i += 1;
    }

    i = 1;
    cout << endl
         << "Pattern-5" << endl;
    while (i <= n)
    {
        space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        j = 1;
        while (j <= i)
        {
            cout << j + i - 1;
            j += 1;
        }

        cout << "\n";
        i += 1;
    }
}

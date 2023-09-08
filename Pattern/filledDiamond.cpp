#include <bits/stdc++.h>
using namespace std;

/*
    Filled Diamond
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n - row - 1; ++col)
        {
            cout << " ";
        }
        for (int col = n - row - 1; col < n; ++col)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n - 1; ++row)
    {
        for (int col = 0; col <= row; ++col)
        {
            cout << " ";
        }
        for (int col = row + 1; col < n; ++col)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
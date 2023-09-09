#include <bits/stdc++.h>
using namespace std;

/*
    Down Arrow
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < 2 * n - 1; ++col)
        {
            if (col == row || col == 2 * n - 2 - row)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
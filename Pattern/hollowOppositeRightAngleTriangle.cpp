#include <bits/stdc++.h>
using namespace std;

/*
    Hollow Opposite Right angle Triangle
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    int size = 2 * n - 1;

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < size; ++col)
        {
            if ((row == 0 && col % 2 == 0) || col == 0 || col == size - 1 - 2 * row)
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
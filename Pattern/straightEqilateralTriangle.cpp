#include <bits/stdc++.h>
using namespace std;

/*
    Straight Equilateral Triangle
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
            if (col >= n - row - 1 && col <= n + row - 1)
            {
                if ((row % 2 == 0 && col % 2 == 1) || (row % 2 == 1 && col % 2 == 0))
                {
                    cout << "*";
                }
                else
                    cout << " ";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
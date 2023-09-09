#include <bits/stdc++.h>
using namespace std;

/*
    Opposite Equilateral Triangle
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
            if (col >= row && col <= 2 * n - row - 2)
            {
                if ((row % 2 == 0 && col % 2 == 0) || (row % 2 == 1 && col % 2 == 1))
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
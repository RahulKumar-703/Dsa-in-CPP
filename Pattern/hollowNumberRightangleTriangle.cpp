#include <bits/stdc++.h>
using namespace std;

/*
    Numbered Right angle Triangle
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        int num = 0;
        for (int col = 0; col <= 2 * row; ++col)
        {
            col % 2 == 0 ? num++ : num;
            if (col == 0 || col == 2 * row || (row == n - 1 && col % 2 == 0))
            {
                cout << num;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
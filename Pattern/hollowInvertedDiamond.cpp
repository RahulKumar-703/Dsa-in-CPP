#include <bits/stdc++.h>
using namespace std;

/*
    Hollow Inverted Diamond
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    int size = 2 * n;

    int row_cnt = 0;
    for (int row = 0; row < size; ++row)
    {
        for (int col = 0; col <= size; ++col)
        {
            if (col < n - row_cnt || col > n + row_cnt)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;

        if (row < n - 1)
        {
            ++row_cnt;
        }
        else if (row > n - 1)
        {
            --row_cnt;
        }
        else
            row_cnt = n - 1;
    }

    return 0;
}
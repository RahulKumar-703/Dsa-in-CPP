#include <bits/stdc++.h>
using namespace std;

/*
    ButterFly
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    int size = 2 * n - 1;
    int row_cnt = 0;

    for (int row = 0; row < size; ++row)
    {
        for (int col = 0; col <= size; ++col)
        {
            if (col <= row_cnt || col >= size - row_cnt)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        row < n - 1 ? ++row_cnt : --row_cnt;
        cout << endl;
    }
    return 0;
}
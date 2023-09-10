#include <bits/stdc++.h>
using namespace std;

/*
    Star Flag filled with mountain numbers
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    int size = 2 * n + 1;
    int row_cnt = 0;

    for (int row = 0; row < size; ++row)
    {
        int num = 1;
        for (int col = 0; col <= 4 * row_cnt; ++col)
        {
            if (col % 2 == 0)
            {
                if (col == 0 || col == 4 * row_cnt)
                {
                    cout << "*";
                }
                else
                {
                    cout << num;
                    col < 2 * row_cnt ? num++ : num--;
                }
            }
            else
                cout << " ";
        }
        cout << endl;
        row < n ? ++row_cnt : --row_cnt;
    }

    return 0;
}
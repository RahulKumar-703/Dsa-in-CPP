#include <bits/stdc++.h>
using namespace std;

/*
    Numbered Increasing and Decreasing Pyramid
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        int num = 1;
        for (int col = 0; col < 2 * n - 1; ++col)
        {
            if (col >= n - row - 1 && col <= n + row - 1)
            {
                cout << num;
                col < n - 1 ? ++num : --num;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/*
    Numbered Increacing Right angle Triangle
*/

int main()
{
    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    int num = 1;
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col <= 2 * row; ++col)
        {
            if (col % 2 == 0)
            {
                cout << num++;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
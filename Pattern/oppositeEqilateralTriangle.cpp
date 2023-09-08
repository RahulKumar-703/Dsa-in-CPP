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
        for (int col = 0; col < row; ++col)
        {
            cout << " ";
        }
        for (int col = row; col < n; ++col)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
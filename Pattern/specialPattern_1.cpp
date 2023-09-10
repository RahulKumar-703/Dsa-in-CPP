#include <bits/stdc++.h>
using namespace std;

/*
    Numbered Pyramid Surrounded by stars
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        bool star = false;
        for (int col = 0; col < 7 + 2 * n; ++col)
        {
            if (col >= n + 3 - row && col <= n + 3 + row)
            {
                if (star)
                    cout << "*";
                else
                    cout << row + 1;

                star ? star = false : star = true;
            }
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
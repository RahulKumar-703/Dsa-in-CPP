#include <bits/stdc++.h>
using namespace std;

/*
    Alphabet inc and dec right angle Triangle
*/

int main()
{

    int n;
    cout << "No. Of Rows = ";
    cin >> n;

    for (int row = 0; row < n; ++row)
    {
        char ch = 'A';
        for (int col = 0; col <= n * row; ++col)
        {
            if (col % 2 == 0)
            {
                cout << ch;
                (col < 2 * row) ? ch++ : ch--;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
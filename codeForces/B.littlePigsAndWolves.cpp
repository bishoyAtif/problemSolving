#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int r,c, n = 0;
    cin >> r >> c;
    string b[r];

    for (int i = 0; i < r; ++i)
    {
        cin >> b[i];
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (b[i][j] == 'W')
            {
                if((i > 0 && b[i - 1][j] == 'P') 
                || (j > 0 && b[i][j - 1] == 'P') 
                || (i < r - 1 && b[i + 1][j] == 'P') 
                || (j < c - 1 && b[i][j + 1] == 'P')) {
                    n++;
                }
            }
        }
    }

    cout << n << endl;
    return 0;
}


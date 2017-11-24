#include <iostream>
#include <cstdio>
#include <math.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    string line;
    string p = "qrbnpk";
    int w = 0, b = 0;
    int wg[6] = {9, 5, 3, 3, 1, 0};

    for (int z = 0; z < 8; ++z)
    {
        cin >> line;
        for (int m = 0; m < 8; ++m)
        {
            if(line[m] == '.') continue;
            if(islower(line[m])) {
                b += wg[p.find(line[m])];
            } else {
                w += wg[p.find(tolower(line[m]))];
            }
        }
    }

    if(w > b) {
        cout << "White" << endl;
    } else if(w < b) {
        cout << "Black" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, sX = 0, sY = 0, sZ = 0, iX, iY, iZ;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> iX >> iY >> iZ;
        sX += iX;
        sY += iY;
        sZ += iZ;
    }

    if(sX == 0 && sY == 0 && sZ == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}


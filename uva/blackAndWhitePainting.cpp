#include <iostream>

using namespace std;

int main()
{
    int r, c, w;
    cin >> r >> c >> w;
    // if (!w)
    // {
    //     r--;
    //     c--;
    // }

    cout << (r - 7) * (c - 7) / 2 << endl;
    // cout << (r  * c) << endl;
    return 0;
}
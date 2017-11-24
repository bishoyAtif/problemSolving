#include <iostream>
#include <cstdio>
#include <math.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, b, a;
    string s;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s >> b >> a;
        if(b >= 2400 && b < a) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}


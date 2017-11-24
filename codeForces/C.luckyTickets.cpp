#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    int c[3] = {0, 0, 0};
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        c[t % 3]++;
    }

    cout << c[0] / 2 + min(c[1], c[2]) << endl;
    return 0;
}


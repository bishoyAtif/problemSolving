#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, res = 0;

    cin >> n >> k;
    int c[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }

    while(c[res] >= c[k - 1] && c[res] > 0 && res < n) {
        res++;
    }

    cout << res << endl;
    return 0;
}


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, n, w;
    unsigned long long res = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; ++i)
    {
        res += k * i;
    }

    if(n >= res) {
        cout << "0" << endl;
        return 0;
    }

    cout << res - n << endl;
    return 0;
}
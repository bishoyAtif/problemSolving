#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, sum = 0, res = 1, resSum = 0;
    cin >> n;
    int c[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
        sum += c[i];
    }

    sort(c, c + n);

    for (int i = n - 1; i >= 0; --i)
    {
        sum -= c[i];
        resSum += c[i];
        if(resSum > sum) break;
        res++;
    }
    cout << res << endl;

    return 0;
}
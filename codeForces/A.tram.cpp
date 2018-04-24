#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int m = 0, in, out, cur = 0, n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> out >> in;
        cur -= out;
        cur += in;
        m = max(cur, m);
    }

    cout << m << endl;
    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int tn;
    cin >> tn;

    for (int tnc = 0; tnc < tn; ++tnc)
    {
        int n, inp, mn = pow(10, 9), mx = 0, res = pow(10, 9);

        cin >> n;
        int l[n];

        if(n == 0 || n == 1) {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> inp;
            mn = min(mn, inp);
            mx = max(mx, inp); 
            l[i] = inp;
        }

        int m = pow(10, 7);
        for (int vh = mn; vh < mx; ++vh)
        {
            int sum = 0;
            for (int st = 0; st < n; ++st)
            {
                sum += abs(l[st] - vh);
            }
            m = min(m, sum);
        }
        cout << m << endl;
    }

    return 0;
}
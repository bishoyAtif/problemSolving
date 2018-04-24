#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double n, t, k, d, timeOne, timeTwo = 0;
    
    cin >> n >> t >> k >> d;

    if ((t <= d && n <= k) || n <= k)
    {
        cout << "NO" << endl;
        return 0;
    }

    timeOne = ceil(n / k) * t;
    
    if (d < t) {
        n = ceil(n / 2) - 1;
        timeTwo = ceil(n / k) * t + d;
    } else {
        timeTwo += (d / t) * t;
        n -= floor(d / t) * k;
        d = fmod(d, t);
        if (n > k)
        {
            cout << "YES" << endl;
            return 0;
        }

        if ((t <= d && n <= k) || n <= k)
        {
            cout << "NO" << endl;
            return 0;
        }

        n = ceil(n / 2) - 1;
        timeTwo += ceil(n / k) * t + d;
    }
    
    if (timeTwo < timeOne)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
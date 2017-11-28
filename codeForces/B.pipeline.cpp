#include <iostream>
#include <cstdio>

using namespace std;

long long lastBinarySearch(long long arr[], long long size, long long target)
{
    long long s = 0, e = size - 1, mid;
    while(s < e) {
        mid = (s + e + 1) / 2;
        if(arr[mid] > target) {
            e = mid - 1;
        } else{
            s = mid;
        }
    }

    return s;
}

int main(int argc, char const *argv[])
{
    long long n, k;
    cin >> n >> k;
    long long cu[k - 1];
    
    cu[0] = k;
    for (long long i = k - 1, c = 1; i >= 2 ; --i, c++)
    {
        cu[c] = cu[c - 1] - 1 + i;
    }

    if(cu[k - 2] < n) {
        cout << -1 << endl;
        return 0;
    }

    cout << lastBinarySearch(cu, k - 1, n) + 1 << endl;

    return 0;
}


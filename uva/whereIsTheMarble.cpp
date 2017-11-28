#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int mid, s = 0, e = size - 1;
    while(s < e)
    {
        mid = s - ((s - e) / 2);
        if (target > arr[mid])
        {
            s = mid + 1;
        } else {
            e = mid;
        }
    }

    return s;
}

int main(int argc, char const *argv[])
{
    int n, q, t, index;

    cin >> n >> q;
    for (int i = 1; n != 0 && q != 0 ; ++i, cin >> n >> q)
    {
        int c[n], index;
        for (int k = 0; k < n; ++k)
        {
            cin >> c[k];
        }

        sort(c, c + n);

        cout << "CASE# " << i << ":" << endl;
        for (int j = 0; j < q; ++j)
        {
            cin >> t;
            index = binarySearch(c, n, t);
            if(t == c[index]) {
                cout << t << " found at " << index + 1 << endl;
            } else {
                cout << t << " not found" << endl;
            }
        }
    }

    return 0;
}


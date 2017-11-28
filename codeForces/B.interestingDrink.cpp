#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int mid, s = 0, e = size - 1;
    while(s < e)
    {
        mid = (s + e + 1) / 2;
        if (target < arr[mid])
        {
            e = mid - 1;
        } else {
            s = mid;
        }
    }

    return s;
}

int main(int argc, char const *argv[])
{
    int n, q, t, index;

    cin >> n;
    int c[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }

    sort(c, c + n);

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> t;
        index = binarySearch(c, n, t);
        if(c[index] > t) {
            cout << index << endl;
        } else {
            cout << index + 1 << endl;
        }
    }


    return 0;
}


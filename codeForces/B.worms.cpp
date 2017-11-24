#include <iostream>
#include <cstdio>

using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int s = 0, e = size - 1, mid;
    while(s < e) {
        mid = (s + e) / 2;
        if(target > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }

    return s;
}

int main(int argc, char const *argv[])
{
    int n, m, r;
    cin >> n;

    int c[n], cu[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }

    cu[0] = c[0];
    for (int i = 1; i < n; ++i)
    {
        cu[i] = cu[i - 1] + c[i];
    }
    
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> r;
        cout << binarySearch(cu, n, r) + 1<< endl;
    }

    return 0;
}


#include <iostream>
#include <cstdio>

using namespace std;

int lastBinarySearch(int arr[], int size, int target)
{
    int s = 0, e = size - 1, mid;
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

int firstBinarySearch(int arr[], int size, int target)
{
    int s = 0, e = size - 1, mid;
    while(s < e) {
        mid = s - (s - e) / 2;
        
        if(arr[mid] < target) {
            s = mid + 1;
        } else{
            e = mid;
        }
    }

    return s;
}

int main(int argc, char const *argv[])
{
    int n, q, r, f, l;
    cin >> n;

    int c[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> r;
        f = firstBinarySearch(c, n, r);
        l = lastBinarySearch(c, n, r);

        if(f == 0) {
            cout << 'X';
        } else {
            cout << c[f - 1];
        }
        cout << " ";
        if (l == n - 1) {
            cout << 'X' << endl;
        } else {
            cout << c[l + 1] << endl;
        }
    }

    return 0;
}


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, s = 0, d = 0;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int b = 0, e = n - 1;
    bool t = true;
    while(b <= e) {
        if(t) {
            if(arr[b] > arr[e]) {
                s += arr[b];
                b++;
            } else {
                s += arr[e];
                e--;
            }
            t = false;
        } else {
            if(arr[b] > arr[e]) {
                d += arr[b];
                b++;
            } else {
                d += arr[e];
                e--;
            }
            t = true;
        }
    }
    cout << s << " " << d << endl;

    return 0;
}
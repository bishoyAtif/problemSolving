#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int l[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> l[i];
    }

    for (int i = 0; i < n; ++i)
    {
        int e = l[i];
        if(i == 0) {
            cout << abs(l[i] - l[i + 1]) << " " << abs(l[i] - l[n - 1]) << endl;
        }
        else if(i == n - 1) {
            cout << abs(l[i] - l[i - 1]) << " " << abs(l[i] - l[0]) << endl;
        } else {
            cout << min(abs(l[i] - l[i - 1]), abs(l[i] - l[i + 1])) << " " << max(abs(l[i] - l[n - 1]), abs(l[i] - l[0])) << endl;
        }
    }

    return 0;
}


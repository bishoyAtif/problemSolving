#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    if (t == 10) {
        if (n == 1)
        {
            cout << -1 << endl;
            return 0;
        } else {
            cout << 10;
            for (int i = 0; i < n - 2; ++i)
            {
                cout << 0;
            }
            cout << endl;
        }
        return 0;
    }

    if (n == 1) {
        cout << t << endl;
        return 0;
    }

    if (n == 2) {
        cout << t << t << endl;
        return 0;
    }

    cout << t;
    for (int i = 0; i < n - 2; ++i) {
        cout << 0;
    }
    cout << t << endl;
    return 0;
}
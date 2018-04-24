#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, q;
    cin >> n >> q;

    set<int> s;
    int c[n];
    int cu[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        s.insert(c[i]);
        cu[i] = s.size();
    }

    for (int i = 0; i < q; ++i)
    {
        cin >> n;
        cout << cu[n - 1] << endl;
    }

    return 0;
}


#include <iostream>
#include "set"

using namespace std;

int main()
{
    int n, p, q, inp;
    set<int> s;
    cin >> n;

    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        cin >> inp;
        s.insert(inp);
    }

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> inp;
        s.insert(inp);
    }

    set<int>::iterator it = s.begin();
    for (int i = 1; i <= n; ++i)
    {
        if (it == s.end() || *it != i) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
        it++;
    }

    cout << "I become the guy." << endl;
    return 0;
}
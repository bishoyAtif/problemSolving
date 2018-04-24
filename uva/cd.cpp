#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, m, t, temp;
    set<int> s;

    cin >> n >> m;
    while(n != 0 && m != 0) {
        t = m + n;
        for (int i = 0; i < t; ++i)
        {
            cin >> temp;
            s.insert(temp);
        }
        cin >> n >> m;
        cout << t - s.size() << endl;
        s.clear();
    }

    return 0;
}
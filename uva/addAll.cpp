#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    priority_queue<int> q;
    int n, tmp;

    while(cin >> n && n != 0) {
        vector<int> v;
        int tCost = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> tmp;
            v.push_back(tmp);
        }

        sort(v.begin(), v.end());
        while(v.size() > 1) {
            tmp = v[0] + v[1];
            v.push_back(tmp);
            tCost += tmp;
            v.erase(v.begin(), v.begin() + 2);
            sort(v.begin(), v.end());
        }
        cout << tCost << endl;
    }

    return 0;
}


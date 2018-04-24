#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    vector<int> v;
    map<int, int> m;

    while(cin >> n)
    {
        if(m[n]) {
            m[n] += 1;
        } else {
            v.push_back(n);
            m[n] = 1;
        }
    }

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " " << m[v[i]] << endl;
    }

    return 0;
}


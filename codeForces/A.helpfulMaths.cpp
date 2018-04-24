#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    vector<int> v;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        v.push_back(s[i] - '0');
        i++;
    }

    sort(v.begin(), v.end());

    cout << v[0];
    for (int i = 1; i < v.size(); ++i)
    {
        cout << "+" << v[i];
    }
    cout << endl;

    return 0;
}


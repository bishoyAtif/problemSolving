#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string inp;
    char tmp;
    set<char> s;

    cin >> n >> inp;

    for (int i = 0; i < n; ++i)
    {
        tmp = tolower(inp[i]);
        s.insert(tmp);
    }

    if(s.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s, ref = "hello";
    cin >> s;

    for (int i = 0, p = 0; i < s.size() && p < 5; ++i)
    {
        if(s[i] == ref[p]) p++;
        if(p == 5) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
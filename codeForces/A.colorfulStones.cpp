#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int ref = 0;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < t.size(); ++i)
    {
        if(t[i] == s[ref]) ref++;
    }
    cout << ref + 1 << endl;

    return 0;
}
#include <iostream>
#include <stdlib.h>

using namespace std;

int charVal(char c)
{
    return c - 'a';
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    int ref = 0, cwDiff, ccwDiff, res = 0, cur;
    for (int i = 0; i < s.size(); ++i)
    {
        cur = charVal(s[i]);
        cwDiff = abs((cur + 26 - ref) % 26);
        ccwDiff = abs((ref + 26 - cur) % 26);

        if(cwDiff > ccwDiff) {
            res += ccwDiff;
        } else {
            res += cwDiff;
        }
        ref = cur;
    }
    cout << res << endl;

    return 0;
}


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int k;
    int c[26], n[26], m = 0;
    string s, res = "";

    cin >> k;
    cin >> s;

    for (int i = 0; i < 26; ++i)
    {
        c[i] = 0;
    }

    for (int i = 0; i < s.length(); ++i)
    {
        c[s[i] - 97]++;
    }

    for (int i = 0; i < 26; ++i)
    {
        m = max(m, c[i]);
        if(c[i] % k) {
            cout << -1 << endl;
            return 0;
        }
        n[i] = c[i] / k;
    }

    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < 26; ++j)
        {
            if(c[j]) {
                for (int k = 0; k < n[j]; ++k)
                {
                    res += j + 97;
                    c[j]--;
                }
            }
        }
    }
    
    cout << res << endl;
    
    return 0;
}


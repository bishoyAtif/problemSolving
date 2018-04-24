#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int w[26];
    string s;
    int n, res = 0, size, maxValue;

    cin >> s >> n;
    for (int i = 0; i < 26; ++i)
    {
        cin >> w[i];
    }

    maxValue = *max_element(w, w +26);
    size = s.size();

    for (int i = 0; i < size; ++i)
    {
        res += (i + 1) * w[s[i] - 'a'];
    }

    for (int i = size + 1; i <= size + n; ++i)
    {
        res += i * maxValue;
    }

    cout << res << endl;

    return 0;
}


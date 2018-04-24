#include <iostream>
#include <stdlib.h>

using namespace std;

bool vowel(char c)
{
    return (c == 'a'
         || c == 'e'
         || c == 'i'
         || c == 'o'
         || c == 'u'
         || c == 'y'
    );
}

int main(int argc, char const *argv[])
{
    string s, res = "";

    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        char c = tolower(s[i]);
        if(!vowel(c)) res = res + "." + c;
    }
    cout << res << endl;

    return 0;
}


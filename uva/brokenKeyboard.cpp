#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    bool b = false;
    string s;
    string res = "", tmp = "";

    while(getline(cin, s))
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if(!(s[i] == '[' || s[i] == ']') && !b) res += s[i];
            if(!(s[i] == '[' || s[i] == ']') && b) tmp += s[i];
            if(b && s[i] == ']') {
                res = tmp + res;
                tmp = "";
                b = false;
            }
            if(s[i] == '[') b = true;
        }
        res = tmp + res;
        cout << res << endl;
        res = "";
    }
    
    return 0;
}


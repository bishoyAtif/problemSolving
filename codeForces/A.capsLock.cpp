#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool allCaps = true;
    string s;
    cin >> s;

    for (int i = 1; i < s.size(); ++i)
    {
        if(islower(s[i])) allCaps = false; 
    }

    if(allCaps) {
        if(islower(s[0])) s[0] = toupper(s[0]);
        else s[0] = tolower(s[0]);
        
        for (int i = 1; i < s.size(); ++i)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;

    return 0;
}
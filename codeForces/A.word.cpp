#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int l = 0, u = 0;

    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        if(islower(s[i])) l++;
        else u++;
    }

    if(u > l) {
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = tolower(s[i]);
        }        
    }
    cout << s << endl;

    return 0;
}


#include <stdio.h>
#include <iostream>
#include <set>
#include <string>
#include <utility>

using namespace std;

int main(int argc, char const *argv[])
{
    set<string> ss;
    set<string>::iterator it;
    string s;
    char c;

    while(cin >> s) {
        if(s == "") continue;

        string current = "";
        for (int i = 0; i < s.size(); ++i)
        {
            c = tolower(s[i]);
            if(islower(c)) {
                current += c;
            } else if(current != "") {
                ss.insert(current);
                current = "";
            }
        }

        if(current != "") {
            ss.insert(current);
        }
    }

    for (it = ss.begin(); it != ss.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}


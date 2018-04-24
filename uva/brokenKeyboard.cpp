#include <iostream>
#include <string>
#include <stdio.h>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    bool b = false;
    char c;
    list<char>::iterator it;

    while(getline(cin, s)) {
        list<char> res, tmp;
        it = res.begin();
        for (int i = 0; i < s.size(); ++i)
        {
            c = s[i];
            if(c == '[') {
                it = res.begin();
                b = true;
                continue;
            }

            if(c == ']') {
                it = res.end();
                b = false;
                continue;
            }

            if(b){
                res.insert(it, c);
            } else {
                res.insert(it, c);
            }
        }

        for (list<char>::iterator it = res.begin(); it != res.end(); ++it)
        {
            printf("%c", *it);
        }
        printf("\n");
    }

    return 0;
}
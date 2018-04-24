#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string f, s;
    cin >> f >> s;

    for (int i = 0; i < f.size(); ++i)
    {
        if(tolower(f[i]) > tolower(s[i])) {
            cout << 1 << endl;
            return 0;
        } else if(tolower(f[i]) < tolower(s[i])) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;

    return 0;
}


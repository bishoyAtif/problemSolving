#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int c = 1;
    string s;
    
    cin >> s;
    for (int i = 1; i < s.size(); ++i)
    {
        if(s[i] == s[i - 1]) c++;
        else c = 1;
        if(c == 7) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}


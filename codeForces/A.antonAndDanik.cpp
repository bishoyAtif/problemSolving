#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int a = 0, d = 0, n;

    cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        if(s[i] == 'A') a++;
        if(s[i] == 'D') d++;
    }

    if(a > d) {
        cout << "Anton" << endl;
    } else if(d > a) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}


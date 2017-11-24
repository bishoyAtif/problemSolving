#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int c[4], counter = 0;
    string s;
    for (int i = 0; i < 4; ++i)
    {
        cin >> c[i];
    }

    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        counter += c[s[i] - 48 - 1];
    }

    cout << counter << endl;
    
    return 0;
}


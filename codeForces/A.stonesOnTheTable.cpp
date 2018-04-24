#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, c = 0;
    string s;

    cin >> n >> s;
    for (int i = 1; i < n; ++i)
    {
        if(s[i - 1] == s[i]) c++;
    }
    cout << c << endl;

    return 0;
}


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, p, v, t, c = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> p >> v >> t;
        if((p && v) || (v && t) || (p && t)) c++;
    }

    cout << c << endl;
    
    return 0;
}


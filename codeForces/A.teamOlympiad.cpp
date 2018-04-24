#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, inp;
    vector<int> p;
    vector<int> m;
    vector<int> pe;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> inp;
        if(inp == 1) p.push_back(i + 1);
        if(inp == 2) m.push_back(i + 1);
        if(inp == 3) pe.push_back(i + 1);
    }

    int t = min(p.size(), min(m.size(), pe.size()));
    cout << t << endl;

    for (int i = 0; i < t; ++i)
    {
        cout << p[i] << " " << m[i] << " " << pe[i] << endl;
    }
    
    return 0;
}
#include <iostream>
#include <cstdio>
#include <math.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    string c = "><+-.,[]";
    string e[8] = {"1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
    string s, rs = "";
    long long ri = 0;
    
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        rs += e[c.find(s[i])];
    }

    for (int i = rs.size() - 1; i >= 0; --i)
    {
        ri += fmod((rs[i] - 48) * pow(2, (rs.size() - i - 1)), 1000003);
        ri = fmod(ri, 1000003) ;
    }

    cout << ri << endl;

    return 0;
}


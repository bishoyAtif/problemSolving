#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./", inp;
    char d;
    int m;
    cin >> d >> inp;

    if(d == 'L') m = 1;
    else m = -1;
    for (int i = 0; i < inp.size(); ++i)
    {
        cout << k[k.find(inp[i]) + m];
    }
    cout << endl;

    return 0;
}
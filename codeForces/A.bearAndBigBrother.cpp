#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int l, b, c =0;
    cin >> l >> b;

    while(l <= b) {
        l *= 3;
        b *= 2;
        c++;
    }

    cout << c << endl;
    
    return 0;
}


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, h, c = 0, tmp;
    cin >> n >> h;

    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        if(tmp > h) {
            c += 2;
        } else {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}


#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, y, count = 0;
    string from, to;
    cin >> n;
    cin >> from >> to;
    for (int i = 0; i < n; ++i)
    {
        x = from[i] - '0';
        y = to[i] - '0';
        if(x > y) {
            if(abs(x - y) > 10 + y - x) count += (10 + y - x);
            else count += abs(x - y);
        } else {
            if(abs(x - y) > 10 + x - y) count += (10 + x - y);
            else count += abs(x - y);
        }
    }

    cout << count << endl;

    return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int c = 0, r = 0, n, q, m = 0;

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> n;
        if(n != r) c++;
        r = n;
    }
    cout << c << endl;

    return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double n, m, a;
    cin >> n >> m >> a;
    long long res = ceil(n / a) * ceil(m / a);
    cout << res << endl;

    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;
    long long r = 0;

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2) {
            r -= i; 
        } else {
            r += i; 
        }
    }

    cout << r << endl;
    return 0;
}
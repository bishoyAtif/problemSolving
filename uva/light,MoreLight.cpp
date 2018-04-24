#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned long> primeNumbers;
    unsigned long n, counter;
    for (long i = 0; i < INT_MAX; i += 3)
    {
        /* code */
    }
    while (cin >> n) {
        counter = 0;
        if (!n) break;

        for (unsigned long i = 1; i <= n; ++i)
        {
            if (!(n % i)) counter++;
        }

        if (counter %  2) cout << "yes" << " " << counter << endl;
        else cout << "no" << " " << counter << endl;
    }

    return 0;
}
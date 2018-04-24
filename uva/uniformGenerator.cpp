#include <iostream>
#include <set>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;

    while (cin >> a >> b) {
        printf("%10d%10d    ", a, b);

        set<int> aFactors;
        set<int> bFactors;
        set<int> result;

        for (int i = 2; i <= a; ++i)
        {
            if (!(a % i))
            {
                aFactors.insert(i);
                a /= i;
            }
        }
  
        for (int i = 2; i < b; ++i)
        {
            if (!(b % i))
            {
                bFactors.insert(i);
                b /= i;
            }
        }

        bool badChoice = false;
        for (set<int>::iterator it = aFactors.begin(); it != aFactors.end(); ++it)
        {
            if (bFactors.find(*(it)) != bFactors.end())
            {
                badChoice = true;
                break;
            }
        }

        if (badChoice)
        {
            cout << "Bad Choice\n\n";
        } else {
            cout << "Good Choice\n\n";
        }
    }

    return 0;
}
#include <iostream>
#include <set>
#include <stdio.h>

using namespace std;

bool fourDigits(int n) {
    int c = 0;
    while(n != 0) {
        n /= 10;
        c++;
    }

    return c == 4;
}

bool uniqueNumbers(int num, int den)
{
    set<int> s;
    int t;
    if(fourDigits(den)) {
        s.insert(0);
    }

    while(num != 0) {
        t = num % 10;
        if(s.find(t) != s.end()) {
            return false;
        } else {
            s.insert(t);
        }
        num /= 10;
    }

    while(den != 0) {
        t = den % 10;
        if(s.find(t) != s.end()) {
            return false;
        } else {
            s.insert(t);
        }
        den /= 10;
    }

    return s.size() == 10;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    while(n != 0) {
        bool f = false;
        for (int den = 1234; den <= 98765 / n; ++den)
        {
            for (int num = den * n; num <= 98765; num *= n)
            {
                if(((num % den) == 0 && (num / den) == n) && uniqueNumbers(num, den)) {
                    printf("%5d / %.5d = %d\n", num, den, n);
                    f = true;
                } 
            }
        }
        if(!f) {
            printf("There are no solutions for %d.\n", n);
        }
        cin >> n;
        if(n != 0) {
            printf("\n");
        }
    }

    return 0;
}
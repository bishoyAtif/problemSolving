#include <iostream>

using namespace std;

bool divisableByLucky(int n)
{
    if(n % 7 == 0 
    || n % 4 == 0
    || n % 44 == 0
    || n % 47 == 0
    || n % 74 == 0
    || n % 77 == 0
    || n % 444 == 0
    || n % 447 == 0
    || n % 477 == 0
    || n % 474 == 0
    ) return true;
    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    if(divisableByLucky(n)) {
        cout << "YES" << endl;
        return 0;
    }

    while(n != 0) {
        if(n % 10 != 7 && n % 10 != 4) {
            cout << "NO" << endl;
            return 0;
        }
        n /= 10;
    }

    cout << "YES" << endl;
    return 0;
}


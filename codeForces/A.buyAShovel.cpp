#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, r, c = 1;
    cin >> k >> r;

    while((c * k % 10 != r) && c * k % 10 != 0) {
        c++;
    }
    cout << c << endl;

    return 0;
}


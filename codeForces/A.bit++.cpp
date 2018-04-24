#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int c = 0, n;
    string tmp;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        if(tmp[1] == '+') c++;
        else c--;
    }

    cout << c << endl;

    return 0;
}
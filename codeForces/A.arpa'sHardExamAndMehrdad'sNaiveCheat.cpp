#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int base = 8, power = n;
    
    for (int i = 0; i < 100; ++i)
    {
        cout << pow(8, i) << endl;
    }
    return 0;
}
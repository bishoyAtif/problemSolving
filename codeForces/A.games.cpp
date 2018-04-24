#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, c = 0;
    cin >>n;
    int h[n], a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> h[i] >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(i == j) continue;
            if(h[i] == a[j]) c++;
        }
    }
    cout << c << endl;
 
    return 0;
}


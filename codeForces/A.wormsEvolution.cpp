#include <iostream>
#include <cstdio>
#include <math.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
        
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                if(arr[i] == (arr[j] + arr[k]) && j != k){
                    cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                    return 0;
                } 
            }
        }
    }

    cout << -1 << endl;
    return 0;
}


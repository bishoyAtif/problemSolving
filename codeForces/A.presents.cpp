#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int inp, res[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> inp;
        res[inp - 1] = i +1;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
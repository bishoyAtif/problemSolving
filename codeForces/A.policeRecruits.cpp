#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, tmp, c = 0, res = 0;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        if(tmp != -1) {
            c += tmp;
        } else if(c == 0) {
            res++;
        } else {
            c--;
        }
    }
    cout << res <<endl;

    return 0;
}
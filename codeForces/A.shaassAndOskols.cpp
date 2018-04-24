#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, q, w, b;
    cin >> n;

    int l[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> l[i];
    }

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> w >> b;
        w--;b--;

        if(w != n - 1) l[w + 1] += (l[w] - b - 1); 
        if(w != 0) l[w - 1] += (b);
        l[w] = 0;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << l[i] << endl;
    }

    return 0;
}
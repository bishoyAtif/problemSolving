#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned long long n, d, k = 0, inp;
    char op;

    cin >> n >> d;

    for (int i = 0; i < n; ++i)
    {
        cin >> op >> inp;
        if(op == '+') d += inp;
        else if(d < inp) k++;
        else d -= inp;
    }
    cout << d << " " << k << endl;

    return 0;
}
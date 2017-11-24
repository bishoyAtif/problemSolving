#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int min = 1;
    int counter = 1;
    int h = -1, m = -1, ch, cm, n;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> ch >> cm;
        if(ch == h && cm == m) {
            counter++;
            min = max(min, counter);
        } else {
            counter = 1;
        }
        h = ch;
        m = cm;
    }

    cout << min << endl;
    return 0;
}


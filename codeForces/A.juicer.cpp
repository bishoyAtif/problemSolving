#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int wasteSize = 0, counter = 0, n, b, d, inp;
    cin >> n >> b >> d;

    for (int i = 0; i < n; ++i)
    {
        cin >> inp;
        if (inp > b) continue;

        wasteSize += inp;

        if (wasteSize > d) {
            wasteSize = 0;
            counter++;
        }
    }

    if (wasteSize > d) {
        wasteSize = 0;
        counter++;
    }

    cout << counter << endl;

    return 0;
}
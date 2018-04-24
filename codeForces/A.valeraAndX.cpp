#include <iostream>

using namespace std;

int main()
{
    char d, nd;
    int n;
    string line;

    cin >> n;
    cin >> line;
    d = line[0];
    nd = line[1];

    if (d == nd) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || i == (n - j - 1)) {
                if (line[j] != d) {
                    cout << "NO" << endl;
                    return 0;
                }
            } else {
                if (line[j] != nd) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
        cin >> line;
    }

    cout << "YES" << endl;
    return 0;
}
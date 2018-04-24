#include <iostream>

using namespace std;

int main()
{
    string f, s;
    cin >> f >> s;

    int fSize = f.size();
    int sSize = s.size();
    
    if (fSize != sSize) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < fSize; ++i) {
        if (f[i] != s[sSize - i - 1]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
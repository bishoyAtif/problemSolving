#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    string res = "";
    
    cin >> n >> k;

    while(res.size() != n) {
        for (int i = 0; i < k && res.size() != n; ++i) {
            res += (i + 'a');
        }
    }
    cout << res << endl;
    return 0;
}
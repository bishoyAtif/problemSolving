#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s, res;
    cin >> s;

    while(s.size()) {
        while(s.size() >= 3 && s.substr(0, 3) == "WUB") {
            s = s.substr(3, s.size());
        }

        while((s.size() > 3 && s.substr(0, 3) != "WUB") || (s.size() <= 3 && s.size() && s != "WUB")) {
            res += s.substr(0, 1);
            s = s.substr(1, s.size());
        }
        res += ' ';
    }

    cout << res << endl;
    return 0;
}


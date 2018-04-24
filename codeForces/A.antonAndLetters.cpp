#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    set<char> c;

    getline(cin, s);

    for (int i = 0; i < s.size(); ++i) {
        if((s[i] - 'a') >= 0 && (s[i] - 'a') < 26) c.insert(s[i]);
    }
    cout << c.size() << endl;

    return 0;
}
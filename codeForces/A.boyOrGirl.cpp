#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    set<char> s;
    string name;

    cin >> name;

    for (int i = 0; i < name.size(); ++i)
    {
        s.insert(name[i]);
    }

    if(s.size() % 2) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}


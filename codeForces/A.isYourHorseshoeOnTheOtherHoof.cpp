#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s;
    int tmp;

    for (int i = 0; i < 4; ++i)
    {
        cin >> tmp;
        s.insert(tmp);
    }
    cout << 4 - s.size() << endl;

    return 0;
}


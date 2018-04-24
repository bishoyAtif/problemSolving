#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string f, s, x = "Hi";
    int m = 0;
    cin >> f >> s;

    if (s == f) {
        cout << "-1" << endl;
        return 0;
    }

    if (f.find(s) == string::npos)
    {
        cout << max((int)s.size(), (int)f.size()) << endl;
        return 0;
    }

    if (s.find(f) == string::npos)
    {
        m = max(m, (int)f.size());
    }

    for (int i = 0; i < f.size(); ++i)
    {
        if (s.find(f.substr(i)) == string::npos)
        {
            m = max(m, (int)f.substr(i).size());
            break;
        }

        if (s.find(f.substr(0, f.size() - i)) == string::npos)
        {
            m = max(m, (int)f.substr(0, f.size() - i).size());
            break;
        }
    }

    for (int i = 0; i < s.size(); ++i)
    {
        if (f.find(s.substr(i)) == string::npos)
        {
            m = max(m, (int)s.substr(i).size());
            break;
        }

        if (s.find(f.substr(0, s.size() - i)) == string::npos)
        {
            m = max(m, (int)s.substr(0, s.size() - i).size());
            break;
        }
    }
    cout << m << endl;
    // for (int i = 0; i < s.size(); ++i)
    // {
    //     for (int j = 0; j < count; ++j)
    //     {
    //         /* code */
    //     }
    // }

    return 0;
}


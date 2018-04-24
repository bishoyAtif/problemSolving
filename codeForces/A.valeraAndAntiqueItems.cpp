#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, an, it, c = 0;
    string s;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i < n; ++i)
    {
        cin >> an;
        for (int j = 0; j < an; ++j)
        {
            cin >> it;
            if(m > it) {
                v.push_back(i + 1);
                getline(cin, s);
                c++;
                break;
            }
        }
    }

    cout << c << endl;
    if (c == 0) {
        cout << endl;
    }
    
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
        if(i != v.size() - 1) {
            cout << " ";
        }
    }
    return 0;
}


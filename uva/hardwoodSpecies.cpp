#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string s;

    cin >> n;

    getline(cin, s);
    getline(cin, s);
    
    for (int a = 0; a < n; ++a)
    {
        map<string, int> m;
        double c = 0;

        while(getline(cin, s))
        {
            if(s == "") break;
            if(m[s]) {
                m[s] += 1;
            } else {
                m[s] = 1;
            }
            c++;
        }

        for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
        {
            cout << it->first << " " <<  setprecision(4) << fixed << (it->second * 100) / c << endl;
        }
        
        if (a != n - 1)
        {
            cout << endl;
        }
    }

    return 0;
}


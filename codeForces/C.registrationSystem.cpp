#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    map<string, int> m;
    string s;
    
    cin >> n;
    

    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        if(m[s]) {
            cout << s << m[s] << endl;
            m[s] += 1;
        } else {
            m[s] = 1;
            cout << "OK" << endl;
        }
    }

    return 0;
}


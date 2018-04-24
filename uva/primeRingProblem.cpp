#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

bool prime(int n)
{
    return (
        n == 2
     || n == 3
     || n == 5
     || n == 7
     || n == 11 
     || n == 13
     || n == 17
     || n == 19
     || n == 23
     || n == 29
     || n == 31
     || n == 37
    );
}

void primeRing(vector<int> v, bool s[], int n)
{
    if(v.size() == n && prime(v[0] + v[n - 1])) {
        cout << v[0];
        for (int i = 1; i < v.size(); ++i)
        {
            cout << " " << v[i];
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if(!s[i] && prime(v[v.size() - 1] + i + 1)) {
            v.push_back(i + 1);
            s[i] = true;
            primeRing(v, s, n);
            s[i] = false;
            v.erase(v.end() - 1);
        }
    }
    return;

}

int main(int argc, char const *argv[])
{
    int caseCounter = 1, n;
    v.push_back(1);

    cin >> n;
    while(1) {
        bool s[n] = {false};
        s[0] = true;

        cout << "Case " << caseCounter << ":" << endl;
        primeRing(v, s, n);
        caseCounter++;
        if(cin >> n) {
            cout << endl;
        } else {
            break;
        }
    }

    return 0;
}


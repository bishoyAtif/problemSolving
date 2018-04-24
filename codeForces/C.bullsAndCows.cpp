#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
#include <string>

using namespace std;

vector<pair<string, pair<int, int> > > v;
pair<int, int> sp;
pair<string, pair<int, int> > bp;

int n, x, y, c = 0;
string num;

bool threeDigits(int n) {
    int c = 0;
    while(n != 0) {
        n /= 10;
        c++;
    }

    return c == 3;
}

bool uniqueNumbers(int num)
{
    set<int> s;
    if(threeDigits(num)) {
        s.insert(0);
    }

    int t;

    while(num != 0) {
        t = num % 10;
        if(s.find(t) != s.end()) {
            return false;
        } else {
            s.insert(t);
        }
        num /= 10;
    }

    return true;
}

bool ok(int i)
{
    if(!uniqueNumbers(i)) return false;
    char baseNum[4];
    for (int j = 0; j < n; ++j)
    {
        int xc = 0, yc = 0;
        num = v[j].first;
        x = v[j].second.first;
        y = v[j].second.second;

        sprintf (baseNum, "%.4d", i);
        for (int i = 0; i < 4; ++i)
        {
            if(num[i] == baseNum[i]) {
                xc++;
            } else if(num.find(baseNum[i]) != string::npos){
                yc++;
            }
        }

        if(xc != x || yc != y) {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> num >> x >> y;
        sp.first = x;
        sp.second = y;
        bp.first = num;
        bp.second = sp;
        v.push_back(bp);
    }

    char res[5];
    res[0] = '\0';
    for (int i = 123; i < 9876; ++i)
    {
        if(ok(i)) {
            if(res[0] == '\0') {
                sprintf (res, "%.4d", i);
            } else {
                cout << "Need more data" << endl;
                return 0;
            }
        }
    }

    if(res[0] == '\0') {
        cout << "Incorrect data" << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}


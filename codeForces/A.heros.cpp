#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int n, c = 0, m = 2 * pow(10, 9), iC, jC, kC, iTmp, jTmp, kTmp, mTmp;

void selectTeam(vector<int> t, bool s[], pair<int,int> l[])
{
    if(t.size() == 7) {
        int tmp = 0;

        for (int a = 0; a < n; ++a) {
            bool fh = false, sh = false;
            for (int i = 0; i < iC; ++i) {
                if(t[i] == l[a].first) fh = true;
                if(t[i] == l[a].second) sh = true;
            }
            if(fh && sh) tmp++;
        }

        for (int a = 0; a < n; ++a) {
            bool fh = false, sh = false;
            for (int i = iC; i < iC + jC; ++i) {
                if(t[i] == l[a].first) fh = true;
                if(t[i] == l[a].second) sh = true;
            }
            if(fh && sh) tmp++;
        }

        for (int a = 0; a < n; ++a) {
            bool fh = false, sh = false;
            for (int i = iC + jC; i < 7; ++i) {
                if(t[i] == l[a].first) fh = true;
                if(t[i] == l[a].second) sh = true;
            }
            if(fh && sh) tmp++;
        }
        c = max(tmp, c);
        return;
    }

    for (int i = 0; i < 7; ++i)
    {
        if(!s[i]) {
            t.push_back(i);
            s[i] = true;
            selectTeam(t, s, l);
            s[i] = false;
            t.erase(t.end() - 1);
        }
    }
}

int main(int argc, char const *argv[])
{
    string h[7] = {"Anka", "Chapay", "Cleo", "Troll", "Dracul", "Snowy", "Hexadecimal"};
    cin >> n;
    
    string fhTemp, shTemp, dummyTemp;
    pair<int, int> l[n];
    pair<int, int> tmp;
    for (int i = 0; i < n; ++i)
    {
        cin >> fhTemp >> dummyTemp >> shTemp;
        tmp.first = distance(h, find(h, h + 7, fhTemp));
        tmp.second = distance(h, find(h, h + 7, shTemp));
        l[i] = tmp;
    }

    int iE, jE, kE;
    cin >> iE >> jE >> kE;

    for (int i = 1; i <= 7; ++i)
    {
        for (int j = 1; j <= 7; ++j)
        {
            for (int k = 1; k <= 7; ++k)
            {
                if(i + j + k != 7) continue;

                iTmp = iE / i;
                jTmp = jE / j;
                kTmp = kE / k;
                int minimum = min(min(iTmp, jTmp), kTmp);
                int maximun = max(max(iTmp, jTmp), kTmp);

                mTmp = maximun - minimum;
                if(mTmp <= m) {
                    m = mTmp;
                    iC = i;
                    jC = j;
                    kC = k;
                }
            }
        }
    }

    vector<int> t;
    bool s[7] = {false};
    selectTeam(t, s, l);
    cout << m << " " << c << endl;

    return 0;
}


#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int tn;
    cin >> tn;

    for (int tnc = 0; tnc < tn; ++tnc)
    {
        int len, c = 0, m;
        bool f = false;
        queue<int> l;
        queue<int> r;

        cin >> len >> m;
        len *= 100;

        int cl;
        string p;
        for (int i = 0; i < m; ++i)
        {
            cin >> cl >> p;
            if(p == "right") {
                r.push(cl);
            } else {
                l.push(cl);
            }
        }

        while(!l.empty() || !r.empty()){
            int tl = len;
            if(f) {
                while(!r.empty() && r.front() <= tl) {
                    tl -= r.front();
                    r.pop();
                }
                f = false;
            } else {
                while(!l.empty() && l.front() <= tl) {
                    tl -= l.front();
                    l.pop();
                }
                f = true;
            }
            c++;
        }
        cout << c << endl;
    }
    return 0;
}


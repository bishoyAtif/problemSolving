#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    priority_queue<int> b;
    priority_queue<int> g;
    int tmp, n, c =0, diff;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        b.push(tmp);
    }

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        g.push(tmp);
    }

    while(!b.empty() && !g.empty()) {
        diff = abs(b.top() - g.top());
        if(diff == 1 || diff == 0) {
            c++;
            g.pop();
            b.pop();
        } else {
            if(b.top() < g.top()) {
                g.pop();
            } else {
                b.pop();
            }
        }
    }

    cout << c << endl;
    return 0;
}


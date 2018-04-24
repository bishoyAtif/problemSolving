#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, v;

    while(cin >> n) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        bool ss = true, qs = true, pqs = true;

        for (int i = 0; i < n; ++i)
        {
            cin >> k >> v;
            if(k == 1) {
                s.push(v);
                q.push(v);
                pq.push(v); 
            } else if(k == 2) {
                if(s.empty() || s.top() != v) {
                    ss = false;
                } else {
                    s.pop();
                }

                if(q.empty() || q.front() != v) {
                    qs = false;
                } else {
                    q.pop();
                }

                if(pq.empty() || pq.top() != v) {
                    pqs = false;
                } else {
                    pq.pop();
                }

            }
        }

        if((ss && pqs && qs) || (ss && pqs) || (ss && qs) || (qs && pqs)) {
            cout << "not sure" << endl;
            continue;
        }

        if(ss) {
            cout << "stack" << endl;
            continue;
        }

        if(qs) {
            cout << "queue" << endl;
            continue;
        }

        if(pqs) {
            cout << "priority queue" << endl;
            continue;
        }

        if(!(ss || qs || pqs)) {
            cout << "impossible" << endl;
            continue;
        }
    }

    return 0;
}


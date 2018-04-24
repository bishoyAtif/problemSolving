#include <bits/stdc++.h>

using namespace std;

std::vector<int> swap(std::vector<int> v, int i)
{
    cout << "Before swap" << endl;
    for (int t = 0; t < v.size(); ++t) {
        cout << v[t];
    }
    cout << endl;
    int tmp = v[i + 2];
    v[i + 2] = v[i];
    v[i] = tmp;

    tmp = v[i + 1];
    v[i + 1] = v[i];
    v[i] = tmp;
    cout << "After swap" << endl;
    for (int t = 0; t < v.size(); ++t) {
        cout << v[t];
    }
    cout << endl << endl;


    return v;
}

string larrysArray(vector <int> v) {
    for (int i = 0; i < v.size(); ++i) {
        // if(v[i] > v[i + 1] && i + 2 == v.size()) {
        //     return "NO";
        // }
        if (v[i] > v[i + 1]) {
            for (int j = 0; j < 2; ++j)
            {
                v = swap(v, i);
                if(v[i] < v[i + 1]) break;
            }
            if(v[i] > v[i + 1]) {
                return "NO";
            }
        }
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> A(n);
        for(int A_i = 0; A_i < n; A_i++){
           cin >> A[A_i];
        }
        string result = larrysArray(A);
        cout << result << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
#include <limits>
#include <math.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    int diff = abs(x1 - x2);
    int newDiff;

    while(x1 < UINT_MAX && x2 < UINT_MAX) {
        if(newDiff == 0) return "YES";
        x1 += v1;
        x2 += v2;
        newDiff = abs(x1 - x2);
        if (newDiff >= diff) break;
    }
    return "NO";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}

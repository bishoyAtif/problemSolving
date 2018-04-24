#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector <int> apples, vector <int> oranges) {
    int aCount = 0, oCount = 0;

    for (int i = 0; i < apples.size(); ++i)
    {
        if(a + apples[i] <= t && a + apples[i] >= s) aCount++;
    }

    for (int i = 0; i < oranges.size(); ++i)
    {
        if(b + oranges[i] <= t && b + oranges[i] >= s) oCount++;
    }

    cout << aCount << endl << oCount << endl;
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, apple, orange);
    return 0;
}

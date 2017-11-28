#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, roleOrder;
    cin >> n;
    pair<int, int> c[n];
    string s[n], role;

    for (int i = 0; i < n; ++i)
    {
        cin >> s[i] >> role;
        if(role == "rat") roleOrder = 0;
        if(role == "woman" || role == "child") roleOrder = 1;
        if(role == "man") roleOrder = 2;
        if(role == "captain") roleOrder = 3;
        c[i].first = roleOrder;
        c[i].second = i;
    }

    sort(c, c + n);

    for (int i = 0; i < n; ++i)
    {
        cout << s[c[i].second] << endl;
    }
    
    return 0;
}


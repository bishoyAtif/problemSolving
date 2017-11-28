#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, temp, c;
    cin >> n >> m;
    std::vector<int> v[n + 1];
    for (int i = 0; i < n; ++i)
    {
        cin >> c;
        while(cin >> temp) {
            v[c].push_back(temp); 
        }
    }

    for (int i = 0; i < n + 1; ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}


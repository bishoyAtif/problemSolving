#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    string inp;
    stack<char> s;
    int c = 0;

    cin >> inp;
    for (int i = 0; i < inp.size(); ++i)
    {
        if(inp[i] == '(') s.push('(');
        if(inp[i] == ')' && !s.empty()) {
            c += 2;
            s.pop();
        }
    }

    cout << c << endl;
    return 0;
}


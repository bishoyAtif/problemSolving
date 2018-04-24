#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> availableSnacks;
    set<int>::iterator it;
    int ref, n, inp;
    cin >> n;
    ref = n;

    for (int i = 0; i < n; ++i)
    {
        cin >> inp;
        availableSnacks.insert(inp);

        if (*(--availableSnacks.end()) != ref)
        {
            cout << endl;
            continue;
        }

        while (!availableSnacks.empty() && *(--availableSnacks.end()) == ref) {
            
            cout << ref << " ";
            ref--;
            
            it = availableSnacks.end();
            --it;
            availableSnacks.erase(it);
        }
        cout << endl;
    }
    
    return 0;
}


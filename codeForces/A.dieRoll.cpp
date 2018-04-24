#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int f, s, m;
    cin >> f >> s;

    m = max(f, s);
    m = 7 - m;

    if(m == 1) {
        cout << "1/6" << endl;
    } else if(m == 2) {
        cout << "1/3" << endl;
    } else if(m == 3) {
        cout << "1/2" << endl;
    } else if(m == 4) {
        cout << "2/3" << endl;
    } else if(m == 5) {
        cout << "5/6" << endl;
    } else if(m == 6) {
        cout << "1/1" << endl;
    }
    
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    string inp;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> inp;

        if (inp == "Tetrahedron") {
            s += 4;
        }

        if (inp == "Cube") {
            s += 6;
        }

        if (inp == "Octahedron") {
            s += 8;
        }

        if (inp == "Dodecahedron") {
            s += 12;
        }

        if (inp == "Icosahedron") {
            s += 20;
        }
    }

    cout << s << endl;
    return 0;
}
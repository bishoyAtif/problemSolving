#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, string> m;
    string key, value, input;
    int s;

    while(getline(cin, input)) {
        if(input == "") break;
        s = input.find(' ');
        value = input.substr(0, s);
        key = input.substr(s + 1, input.size());
        m[key] = value;
    }

    while(cin >> input) {
        input = m[input];
        if(input != "") {
            cout << input << endl;
        } else {
            cout << "eh" << endl;
        }
    }

    return 0;
}


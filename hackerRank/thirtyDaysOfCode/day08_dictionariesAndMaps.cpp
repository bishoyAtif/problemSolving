#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <iterator>

using namespace std;

int main() {
    map<string, int> m;
    int max_count;
    std::string input;
    scanf("%i", &max_count);

    for (int i = 0; i < max_count; ++i)
    {    
        getline(cin >> ws, input);
        std::istringstream buf(input);
        std::istream_iterator<std::string> beg(buf), end;
        std::vector<std::string> tokens(beg, end);

        int int_value;
        std::stringstream ss(tokens[1]);
        ss >> int_value;
        m[tokens[0]] = int_value;
    }

    int value;
    while(true) {
        if(!getline(cin, input)) break;
        
        if(value = m[input]) {
            printf("%s=%i\n", input.c_str(), value);
        } else {
            printf("Not found\n");
        }     
    }

    return 0;
}
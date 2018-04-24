#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

char res[9];
int strToInt(string s) 
{
    stringstream str(s);
    int intValue = 0;
    str >> intValue;

    return intValue;
}

string intToStr(int i)
{
    stringstream s;
    s << i;

    return s.str();
}

string floatToStr(float i)
{
    stringstream s;
    s << i;

    return s.str();
}

char* timeConversion(string s) 
{
    string period = s.substr(8, 2);
    int hours = strToInt(s.substr(0, 2));
    if ((period == "AM" && hours != 12) || (period == "PM" && hours == 12)) {
        sprintf(res, "%s", s.substr(0, 8).c_str());
        return res;
    }

    hours = (hours + 12) % 24;
    sprintf(res, "%02i%s", hours, s.substr(2, 6).c_str());
    return res;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;

    return 0;
}
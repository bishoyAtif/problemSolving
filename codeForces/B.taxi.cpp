#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int oneC = 0, twoC = 0, threeC = 0, fourC = 0, n, tmp, res = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        if(tmp == 1) oneC++;
        if(tmp == 2) twoC++;
        if(tmp == 3) threeC++;
        if(tmp == 4) fourC++;
    }

    res += fourC;

    res += twoC / 2;
    twoC %= 2;

    res += min(oneC, threeC);
    if(oneC >= threeC) {
        oneC -= threeC;
        threeC = 0;
    } else {
        threeC -= oneC;
        oneC = 0;
    }

    res += threeC;

    res += oneC / 4;
    oneC %= 4;

    if(oneC > 2 && twoC > 0) {
        res += 2;
    } else if(oneC > 0 || twoC > 0) {
        res++;
    }

    cout << res << endl;

    return 0;
}
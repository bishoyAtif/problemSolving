#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    int max = -63, hg_value = 0;


    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    for (int hg_i = 0; hg_i < 4; ++hg_i)
    {
        for (int hg_j = 0; hg_j < 4; ++hg_j)
        {
            hg_value = 0;

            for (int first_raw_counter = hg_j; first_raw_counter < hg_j + 3; ++first_raw_counter)
            {
                hg_value += arr[hg_i][first_raw_counter];
            }

            hg_value += arr[hg_i + 1][hg_j + 1];

            for (int third_raw_counter = hg_j; third_raw_counter < hg_j + 3; ++third_raw_counter)
            {
                hg_value += arr[hg_i + 2][third_raw_counter];
            }
            max = hg_value > max ? hg_value : max;
        }
    }

    cout << max;

    return 0;
}
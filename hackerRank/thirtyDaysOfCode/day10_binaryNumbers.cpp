#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;

    int ones_counter = 0;
    int max_count = 0;
    int digit_to_add;

    while(n) {
        digit_to_add = n % 2;
        if(digit_to_add) {
            ones_counter++;
        } else {
            ones_counter = 0;
        }
        max_count = ones_counter > max_count ? ones_counter : max_count;
        n = n / 2;
    }

    cout << max_count << endl;

    return 0;
}

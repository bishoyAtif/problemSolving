#include <iostream>
#include <cstdio>

using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int s = 0, e = size - 1, mid;
    while(s <= e) {
        mid = s - (s - e) / 2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            s = mid + 1;
        } else if(arr[mid] > target) {
            e = mid - 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;

    if(n <= 2) {
        cout << 1 << endl;
        return 0;
    }
    return 0;
}


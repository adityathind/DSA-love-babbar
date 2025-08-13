#include <iostream>
using namespace std;
// to find the pivot element in an array

int getpivot(int arr[], int size) {
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s > e) {
        if (mid > arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return mid + 1;
}

int main() {
    int even[] = {6, 8, 9, 1, 3, 4};
    cout << "the pivot index is: " << getpivot(even, 6) << endl;

    return 0;
}

// to fin
// to find index of a number
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {
    int even[6] = {3, 6, 9, 13, 16, 18};
    int odd[5] = {1, 3, 5, 6, 8};

    int index = binarySearch(even, 6, 13);
    cout << "index of 13 is " << index << endl;
    return 0;
}
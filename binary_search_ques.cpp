// To find the first and the last occurence of
// element in a sorted array.
#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key) {
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        // store the answer in ans then check for more
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;

        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key) {
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        // store the answer in ans then check for more
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;

        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int even[8] = {1, 2, 3, 3, 3, 3, 4, 5};
    cout << "first occurence of 3 is " << firstOccurence(even, 8, 3) << endl;
    cout << "last occurence of 3 is " << lastOccurence(even, 8, 3) << endl;
    return 0;
}
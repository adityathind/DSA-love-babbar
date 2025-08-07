#include <climits>
#include <iostream>
using namespace std;

// function get value of maximum
int getMax(int num[], int n) {
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

// funtion to give value of minimum

int getMin(int num[], int n) {
    int mini = INT_MAX;

    for (int i = 0; i < n; i++) {
        mini = min(mini, num[i]);

        // if (num[i] < min) {
        // min = num[i];
        // }
    }
    return mini;
}

int main() {
    // take the size of array
    int size;
    cout << "what is the size of array you want " << endl;
    cin >> size;

    // take input in the array
    cout << "input the values to put in array" << endl;
    int num[100];
    for (int i = 0; i < size; i++)
        cin >> num[i];

    cout << "maximum value is " << getMax(num, size) << endl;
    cout << "minimum value is " << getMin(num, size) << endl;
    return 0;
}
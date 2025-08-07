#include <iostream>
using namespace std;

// to find the sum of all numbers in an array
int sumOfArr(int num[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + num[i];
    }
    return sum;
}

int main() {
    cout << "what is the size of the array" << endl;
    int size;
    cin >> size;
    int num[100];

    cout << "enter the input for the array" << endl;
    for (int i = 0; i < size; i++)
        cin >> num[i];

    cout << "the sum of all values in the array is" << " "
         << sumOfArr(num, size) << endl;
    return 0;
}
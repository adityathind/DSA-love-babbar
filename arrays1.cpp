#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "printing the array" << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "printing DONE" << endl;
}

int main() {
    int myArray[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    printArray(myArray, 8);

    return 0;
}
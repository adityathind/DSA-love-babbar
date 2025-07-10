#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    for (int i = 2; i < n; i++) {
        if (n % 1 == 0) {
            cout << "Not a Prime number" << endl;
            break;
        } else
            (n % n == 0);
    }
}

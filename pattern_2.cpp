#include <iostream>
using namespace std;
/*
int main() {
    int n;
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
*/

void nNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern18(int n) {
    for (int i = 0; i <= n; i++) {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
            cout << ch << "  ";
        cout << endl;
    }
}

int main() {
    nNumberTriangle(10);

    return 0;
}

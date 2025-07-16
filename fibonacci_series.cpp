#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i <= n; i++) {
        int nextnumber = a + b;
        cout << nextnumber << " ";
        a = b;
        b = nextnumber;
        }
}

int main() {
    fibonacci(10);
}
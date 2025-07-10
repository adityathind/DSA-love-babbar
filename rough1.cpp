#include <iostream>
using namespace std;

/*
int main() {
    string x = "aditya";

    int len = x.size();
    x[len - 1] = 'r';

    return 0;
}*/

int minOfTwo(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int num;
    int lastdig;
    int sum = 0;
    cin >> num;

    while (num > 0) {
        lastdig = num % 10;
        sum += lastdig;
        num /= 10;
    }
    cout << sum << endl;
    return 0;
}

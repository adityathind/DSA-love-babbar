#include <iostream>
using namespace std;
/*int main() {
    char ch;
    cout << "enter the character" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "the entered character is in lowercase and it is " << ch
            << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "the entered character is in uppercase and it is " << ch
            << endl;
    } else
        (ch >= '0' && ch <= '9');
    {
        cout << "the entered character is a numeric and its value is " << ch
            << endl;
    }
}
*/

/*To find the factorial till number N
int main() {
    int n;
    int fact = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << fact;
    return 0;
}
*/
// funtion to find factorial till n

int factorialN(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
/*
int main() {
    cout << factorialN(6) << endl;
    cout << factorialN(23) << endl;

    return 0;
}
    */

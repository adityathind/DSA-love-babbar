#include <iostream>
using namespace std;

int main ()  {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; 
     
    // int i = 1;
    // while (i<=n) {
    //     int j = 1;
    //     while (j<=i) {
    //         cout <<
    //     }
    // }

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= 2*i - 1 ; j++){
            cout << j << " ";
        } cout << endl;
    }
      

}
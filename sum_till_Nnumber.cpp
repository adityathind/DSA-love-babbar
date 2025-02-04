/*
#include <iostream>
using namespace std;
int main () {

int x ;
cin >> x; 

int i = 1;
int sum=0;
 while ( i<=x ) {
    sum = sum + i;
    i= i + 1;
     
 }
 cout << sum << endl;
 return 0;
}
*/

#include <iostream>
using namespace std;
 
int main () {

int x;
cin >> x;

int i = 0;
int sum = 0;

while (i<=x) {
        if (i%2==0) {
            sum = sum + i;
        }
        i = i+1;
    }
cout << sum << endl;
}


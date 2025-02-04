#include<iostream>
using namespace std;
int main ()
{ 
char ch;
cout << "enter the character" <<endl;
cin >> ch;
if (ch>= 'a' && ch<='z') {
 cout << "the entered character is in lowercase and it is " << ch << endl;
}
else if (ch>='A' && ch<='Z') {
    cout<< "the entered character is in uppercase and it is " << ch << endl;
}
  else (ch >= '0' && ch<='9'); {
    cout << "the entered character is a numeric and its value is " << ch << endl;
  }
  }


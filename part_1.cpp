#include <iostream>
#include <string>
using namespace std;

int maim(){
int* pmyInteger = new int;

string* pmyString = new string;

cout << "Enter an integer value: ";
cin >> *pmyInteger;

cout << "Enter a string value: ";
cin >> *pmyString;

cout << "The Integer value is: " << *pmyInteger << endl;
cout << "The string value is: " << *pmyString << endl;

delete pmyInteger;
delete pmyString;

return 0;

}
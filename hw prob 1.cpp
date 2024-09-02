#include <iostream>
using namespace std;

int main(){
int var1;
int var2;
cout << "Enter an int value for var1" << endl;
cout << "Enter an int value for var2" << endl;
cin >> var1 >> var2;
cout << "var1: " << var1 << ":    var2: " << var2 << endl;

int dummyvar = var1;
var1 = var2;
var2 = dummyvar;
cout << "var1: " << var1 << ":   var2: " << dummyvar << endl;
}

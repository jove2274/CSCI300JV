#include <iostream>
using namespace std;

int main(){

// area of a trapezoid is 0.5*(a+b)*h
// a is long base and b is short base
// get a (long base)
// get b (short base)
// get h (height)
// perform fomula
// output area

int baseA;
int baseB;
int height;
double area = 0.5(baseA + baseB)*height;

cout << "What is the length of the long base?" << endl;
  cin >> baseA;
cout << "What is the length of the short base?" << endl;
  cin >> baseB;
cout << "What is the trapezoid's height?" << endl;
  cin >> height;

cout << "The area of the trapezoid is " << fixed << setprecision(1) << area << endl;

return 0;

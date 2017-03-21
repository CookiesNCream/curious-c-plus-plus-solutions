#include <iostream>

using namespace std;

int output(int a, int b, int c) {
  return a+b+c;  
}

int main() {
  int num1, num2, num3;
  int sum;
  cin>>num1>>num2>>num3;
  sum = output(num1,num2, num3);
  cout<<sum;
  return 0;
}

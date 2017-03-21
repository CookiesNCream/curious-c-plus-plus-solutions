#include <iostream>

using namespace std;

int main() {
    int a, b;
    int n = 9;
    string num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a;
    cin >> b;
    for(int x = a; x <= b; x++){   
        if(x > n){
          if(x%2 == 0){
            cout << "even\n";
          }
          else {
            cout << "odd\n";
          }
        }
        else {
          cout << num[x-1] << endl;
        }    
    }
    return 0;
}

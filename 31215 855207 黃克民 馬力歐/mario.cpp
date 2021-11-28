#include <iostream>
using namespace std;
int main() {
  int height;
  cout << "請輸入層數:";
  cin >> height;
  for ( int a = height ; a >= 1 ; a-- ) {
    for ( int b = a ; b > 1 ; b-- ) {
      cout << " ";
    }
    for ( int c = height - a + 1 ; c >= 1 ; c-- ) {
      cout << "#";
    }
    cout << " ";
    for ( int d = height - a + 1 ; d >= 1 ; d-- ) {
      cout << "#";
    }
    cout << "\n";
  }
} 
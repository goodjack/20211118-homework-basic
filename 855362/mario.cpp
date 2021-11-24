#include <iostream>
using namespace std;
int main() {
  int a ;
  int c = 1;
  cin >> a;
  for(int i = 1 ; i <= a ; i++){
    int b = a - i;
    for(int j = 1 ; j <= b ; j++){
      cout <<" ";
    }
    for(int k = 0 ; k < i ; k++){
      cout <<"*";
    }
    cout <<"  ";
    for(int k = 0 ; k < i ; k++){
      cout <<"*";
    }
  cout <<"\n";
  }
} 
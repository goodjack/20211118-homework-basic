#include <iostream>
using namespace std;
int main() {
  int height;
  cout << "Height: \n";
  cin >> height;
  for(int i=1; i <= height; i++){
    int space = height - i;
    for(int j=1; j <= space; j++){
      cout << " ";
    }
    for(int j=1; j <= i; j++){
      cout << "#";
    }
    cout << "  ";
    for(int j=1; j <= i; j++){
      cout << "#";
    } cout << "\n";
  }
}

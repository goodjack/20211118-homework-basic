#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    for(int k = 1; k <= (n - i + 1); k++) {
      cout << " ";
    }
    for(int k = 1; k <= i; k++){
      cout << "#";
    }
    cout << "  ";
    
    for(int k = 1; k <= i; k++){
      cout << "#";
    }
    for(int k = 1; k <= (n - i + 1); k++){
      cout << " ";
    }
    cout << "\n";
  }



    

} 
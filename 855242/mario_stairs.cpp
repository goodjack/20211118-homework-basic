#include <iostream>
using namespace std;

int main() {
	int hei;
  cout << "height: ";
  cin >> hei;

  for (int i = 0; i < hei + 1; i++) {
    
    for (int j = 0; j < (hei - i); j++) {
      cout << " ";
    }
    
    for (int k = 0; k < i; k++) {
      cout << "#";
    }
    
    cout << "  ";

    for (int k = 0; k < i; k++) {
      cout << "#";
    }

    cout << "\n";
  }

}

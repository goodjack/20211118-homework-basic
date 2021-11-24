#include <iostream>
using namespace std;

int j;
int k;
int l;

int main() {

  cin >> j;

  for(int i = 0; i < (j + 1); i++) {

    for(k = 0; k < (j - i); k ++) {

      cout << " ";

    }
    
    for(l = 0; l < (i + 1); l ++) {

        cout << "#";

      }
      
    cout << "  ";

    for(l = 0; l < (i + 1); l ++) {

        cout << "#";

      }

     cout << "\n";

  }

}

#include <iostream>
using namespace std;

int main() {
  int h, a, b;
  cin >> h;
  int  i ;
  for(int r=1;r <= h;r++){
    for(a = r; a <= h ; a++){
      cout << " " ;
    }
    for(int ai = 1; ai <= r; ai++){
      cout << "#" ;
    }
    cout << "  " ;
    for(int bi = 1; bi <= r; bi++){
      cout << "#" ;
    }
    for(b = r; b <= h ; b++){
      cout << " " ;
    }
    
    cout << "\n" ;
  }
}

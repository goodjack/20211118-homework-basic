using namespace std;
#include <iostream>

int main() {
int h;

cout << "高度:";
cin >> h;

  for (int i=0 ; i<=h ; i++){
    for (int k=1 ; k <= h-i ; k++){
      cout << " ";
    }
    for (int j=0 ; j <= i ; j++){
      cout << "#";
    }
    cout << " ";
    cout << " ";
    for (int a=0 ; a <= i ; a++){
      cout << "#";
    }
    cout << "\n";
  }
} 
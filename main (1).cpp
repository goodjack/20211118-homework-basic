using namespace std;
#include <iostream>

int main() {
  int a;


  cout << "高度:";
  cin >> a;
  cout <<"\n";
  int i = a;
  while(i>0){
    int s=i ;
    while ( s > 0){
      cout << " ";
      s--;
    }
    for (int w = i-1 ; w < a ; w++){
      cout << "#";
    }  
    cout << "  ";
    for (int w = i-1 ; w < a ; w++){
      cout << "#";
    } 
    while ( s > 0){
      cout << " ";
      s--;
    }
    cout << "\n";
    i--;
  }
} 
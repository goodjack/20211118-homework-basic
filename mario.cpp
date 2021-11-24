#include <iostream>
using namespace std ;

int main() {
    int h;
    cin >> h;
    for (int i = 1;  i <= h; i++) {
        int space = h - i;
        for (int j = 1; j <= space; j++){
            cout << " ";
        }
        for (int j = 1; j<= i; j++){
            cout << "#";
        }
        cout << "  ";
        for (int j = 1; j<= i; j++){
            cout << "#";
        }
        cout << "\n";
    }
}
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int h;
    cout << "高度:";
    cin >> h;
    cout << "\n";
    for (int i = 0; i < h; i++){
        for (int j = 1; j<= h-i; j++){
            cout << " ";
        }for (int k = 0; k <= i;k++){
            cout << "#";
        }
        cout << " ";
        cout << " ";
        for (int l = 0; l <= i; l++){
            cout << "#";
        }
        cout << "\n";
    }
}
#include <iostream>
using namespace std;

int main() {
    int h;
    cout << "高度: ";
    cin >> h;

    for (int i = 1; i <= h; i++) {//直行

        for (int j = h; j > 0; j--) {//橫排
            if (i < j) {
                cout << " ";
            } else {
                cout << "#";
            }
        }
        cout << " ";

        for (int j = 0; j < i; j++) {
            cout << "#";
        }
        
        cout << endl;
    }
} 

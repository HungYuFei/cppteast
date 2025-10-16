#include <iostream>
using namespace std;

int main() {
    // 顯示星號三角形
    cout << "Star Pattern: \n";
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "\nMultiplication Table: \n";
    
    // 顯示九九乘法表
    int i = 1;
    while (i <= 9) {
        cout << i;
        int j = 1;
        while (j <= 9) {
            cout << " " << j << " = " << i * j << "\t";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}

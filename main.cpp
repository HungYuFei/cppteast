#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if ((i % 7) == 0) {  // 如果能被7整除
            cout << i << " "; // 輸出該數字
        }
    }
    return 0;
}

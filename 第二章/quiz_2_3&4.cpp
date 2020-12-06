/* 
 * @Author: iDestro 
 * @Description:  根据程序读结果
 */ 

#include <iostream>
using namespace std;


int main() {
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;
    int i = 10 , i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;
    return 0;
}


/* 
 * 输出结果：
 * 32
 * 4294967264
 * 32
 * -32
 * 0
 * 0
 */
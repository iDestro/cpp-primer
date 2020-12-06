/* 
 * @Author: iDestro 
 * @Description: 执行下面的代码段将输出什么结果？
 * // 10 10
 */ 


#include <iostream>
using namespace std;

int main() {
    int i, &ri = i;
    i = 5;
    ri = 10;
    cout << i << " " << ri << endl;
    return 0;
}
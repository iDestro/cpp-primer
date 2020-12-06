/* 
 * @Author: iDestro 
 * @Description: 指出下面的名字中哪些是非法的？
 * (a)int double = 3.14;
 * 非法，double为保留字
 * (b)int _;
 * 不非法
 * (c)int catch-22;
 * 非法，-不能再变量名字出现
 * (d)int 1_or_2 = 1;
 * 非法，数字不能作为开头
 * (e)double Double = 3.14;
 * 合法，但不建议吧
 */ 


// 测试
#include <iostream>
using namespace std;

int main() {
    int double = 3.14;
    int _;
    int catch-22;
    int 1_or_2 = 1;
    double Double = 3.14;
    return 0;
}
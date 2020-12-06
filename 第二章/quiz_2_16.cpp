/* 
 * @Author: iDestro 
 * @Description: 考察下面的所有赋值然后回答：哪些赋值时不合法的？为什么？哪些赋值时合法的？它们执行了什么样的操作？
 * int i = 0, &r1 = i;      double d = 0, &r2 = d;
 * (a) r2 = 3.14159;
 * 对
 * (b) r2 = r1;
 * 对
 * (c) i = r2;
 * 对
 * (d) r1 = d;
 * 对
 */ 

// 测试

#include <iostream>
using namespace std;

int main() {

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;

    
    return 0;
}

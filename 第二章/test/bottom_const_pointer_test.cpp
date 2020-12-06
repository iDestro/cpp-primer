/* 
 * @Author: iDestro 
 * @Description: 对底层const进行测试
 */ 
#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 5;
    // 这是一个顶层const，不允许修改p的值
    int *const p = &a;
    cout << *p << endl;
    // p = &b;  报错
    // 这是一个底层const，可以修改p的值。当p的值固定住，p指向对象的值不能修改
    const int *q = &a;
    q = &b;
    // *q = 7; 报错
    cout << *q << endl;

    // 未初始化的底层const修饰的const指针
    const int *p3;
    cout << p3 << endl;

    // 未初始化的顶层，底层const修饰的const指针
    // const int *const p4; 报错

    // 常量取地址是什么？
    const int d = 1;
    const int *p5 = &d;
    cout << *p5 << endl;
    return 0;
}

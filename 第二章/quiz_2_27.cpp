/* 
 * @Author: iDestro 
 * @Description:  
 */ 


void foo() {
    // (a)
    int i = -1, &r = 0; // 不合法，对于一般引用，被引用的是一个对象
    // (b)
    int *const p2 = &i2; // 
    // (d)
    const int *const p3 = &i2;
    // (e)
    const int *p1 = &i2;
    // (f)
    const int &const r2;
    // (g)
    const int i2 = i, &r = i;
}

void bar() {
    // (c)
    const int i = -1, &r = 0;
}

#include <iostream>
using namespace std;

int main() {
    return 0;
}

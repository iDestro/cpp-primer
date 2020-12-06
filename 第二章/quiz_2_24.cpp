/* 
 * @Author: iDestro 
 * @Description: 在下面这段代码中为什么p合法而lp非法？
 * int i = 42;
 * void *p = &i;
 * long *lp = &i; // 试图将int型对象的地址赋给long型指针
 * 
 * void*是一种特殊的指针，它能指向任意类型的对象。
 * 
 */ 


#include <iostream>
using namespace std;

int main() {
    int i = 42;
    void *p = &i;
    long *lp = &i;
    return 0;
}

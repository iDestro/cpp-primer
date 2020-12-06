/* 
 * @Author: iDestro 
 * @Description: 说明下面的这些定义是什么意思，挑出其中不合法的。
 * (a)int i, *const cp;
 * i 是一个整型变量，cp是一个const指针，被顶层const修饰，不能修改cp的值
 * (b)int *p1, *const p2;
 * p1是一个int*指针，p2同上
 * (c)const int ic, &r = ic;
 * ic是一个const常量，r是对ic的常量引用
 * (d)const int *const p3;
 * p3是一个const指针，被底层const修饰，p3所指向对象的值不能被修改, p3未被初始化，不合法
 * (e)const int *p;
 * p是一个const指针，p指向对象的值不能修改，在这里p的值是一个垃圾值
 * 
 * 被顶层const修饰的const指针需要初始化，否则报错
 */ 


#include <iostream>
using namespace std;

int main() {
    return 0;
}

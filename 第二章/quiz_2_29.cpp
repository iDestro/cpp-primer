/* 
 * @Author: iDestro 
 * @Description: 假设已有上一个练习中定义的那些变量，则下面的那些语句是合法的？请说明原因。
 * (a)i = ic;
 * 合法，ic是一个int型常量，一个int型常量可以赋值给int型变量
 * (b)p1 = p3;
 * 不合法，const指针不能赋值给普通指针，否者const指针会被随便改，这是不符合常理的。
 * (c)p1 = &ic;
 * 不合法，int型常量取地址后是一个底层const修饰的const指针，而p1是一个普通指针，所以不能赋值
 * (d)p3 = &ic;
 * 不合法，p3是一个常量指针，不能被赋值
 * (e)p2 = p1;
 * 不合法，不能修改p2的值，p2被顶层const修饰
 * (f)ic = *p3;
 * 不合法，ic是一个常量，不能被修改
 */ 


#include <iostream>
using namespace std;

int main() {
    return 0;
}

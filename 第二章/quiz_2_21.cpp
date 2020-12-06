/* 
 * @Author: iDestro 
 * @Description: 请解释下述定义。在这些定义中有非法的吗？如果有，为什么？
 * int i = 0;
 * (a)double *dp = &i;
 * 错误，试图将指向int的指针赋值给double型指针
 * (b)int *ip = i;
 * 错误，int型不能直接赋值给int型指针
 * (c)int *p = &i;
 * 合法
 */ 


#include <iostream>
using namespace std;

int main() {
    int i = 0;
    double *dp = &i;
    int *ip = i;
    int *p = &i;
    return 0;
}

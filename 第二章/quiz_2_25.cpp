/* 
 * @Author: iDestro 
 * @Description: 说明下列变量的类型和值
 * (a)int *ip, i, &r = i;
 * ip是一个整型指针，值随机，i是个一个整型变量，值随机，r是对i的引用
 * (b)int i, *ip = 0;
 * i是个整型变量，ip是一个整型指针，值为空值
 * (c)int *ip, ip2;
 * ip是个整型指针，ip2是整型变量
 */ 


#include <iostream>
#include <cstdio>
using namespace std;


void a() {
    int *ip, i, &r = i;
    printf("ip = %p\n", ip);
    cout << "i = " << i << endl;
    cout << "r = " << r <<endl;
}

void b() {
    int b = 3;
    int i, *ip = &b;
    cout << "i = " << i << endl;
    printf("ip = %p\n", ip);
}

void c() {
    int *ip, ip2;
    printf("ip = %p\n", ip);
    cout << "ip2 = " << ip2 << endl;
}

void d() {
    int *ip;
    cout << *ip << endl;
}

int main() {
    a();
    c();
    b();
    d();
    return 0;
}
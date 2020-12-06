/* 
 * @Author: iDestro 
 * @Description: 编写代码分别更改指针的值以及指针所指对象的值
 */ 


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char a = 'a', b = 'b', *p = &a;
    printf("%p\n", p);
    // 修改指针p的值
    p = &b;
    printf("%p\n", p);
    // 打印指针当前指向的值
    cout << *p << endl;
    // 修改当前指针指向的值
    *p = 'c';
    cout << *p << endl;
    return 0;
}
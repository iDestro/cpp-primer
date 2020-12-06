/* 
 * @Author: iDestro 
 * @Description: 判断下列定义推断出的类型是什么，然后编写程序进行验证。
 * const int i = 42;
 * auto j = i;
 * 忽略顶层const，j为int
 * const auto &k = i; auto *p = &i;
 * k为const int&， p为const int*
 * const auto j2 = i, &k2 = i;
 * j2为const int, k2为const int&
 */ 


#include <iostream>
using namespace std;

int main() {
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i;
    const auto &k2 = i;
    return 0;
}

/* 
 * @Author: iDestro 
 * @Description: 利用本节定义的变量，判断下列语句的运行结果
 */ 



#include <iostream>
using namespace std;

int main() {
    int i = 0, &r = i;
    auto a = r; // a int
    const int ci = i, &cr = ci; // ci: const int, cr: const int&
    auto b = ci; // b int
    auto c = cr; // c int
    auto d = &i; // d int*
    auto e = &ci; // e const int*
    const auto f = ci; // f const int  
    auto &g = ci; // g const int&
    // auto &h = 42; 错误，不能为非常量引用绑定字面量
    const auto &j = 42; // j const int&

    a = 42;
    b = 42;
    c = 42;
    // d = 42;  错误，d为int*
    // e = 42;  错误，e为const int*
    // g = 42; 错误，g是常量引用，不能被修改
    return 0;
}

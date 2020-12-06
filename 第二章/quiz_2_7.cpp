/* 
 * @Author: iDestro 
 * @Description: 下述字面值表示何种含义？它们各自的数据类型是什么？
 * (a)"Who goes with F\145rgus?\012"
 * 字符串字面量，其中里面有两个转义字符
 * (b)3.14e1L
 * 浮点数字面量，用科学计数法表示，后缀L描述了它是一个long double类型的。
 * (c)1024f
 * 浮点数字面量，后缀f描述了它是一个float类型的
 * (d)3.14L
 * 浮点数字面量，后缀L描述了它是一个long double类型的
 */ 


#include <iostream>
using namespace std;


int main() {
    cout << "Who goes with F\145rgus?\012" << endl;
    return 0;
}
/* 
 * @Author: iDestro 
 * @Description: 解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正。
 * (a)std::cin >> int input_value;
 * 变量的定义不应该在这里
 * (b)int i = {3.14};
 * 列表初始化，初始化存在丢失信息的风险，编译器将报错，double->int，小数部分丢失
 * (c)double salary = wage = 9999.99;
 * wage应该要先定义
 * (d)int i = 3.14;
 * 变量类型用错了
 */ 


// 纠正

#include <iostream>
using namespace std;

int main() {
    int input_value;
    cin >> input_value;
    double i0 = 3.14;
    double i1 = {3.14};
    double salary = 9999.99, wage = salary;
    return 0;
}

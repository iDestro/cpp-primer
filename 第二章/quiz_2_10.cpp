/* 
 * @Author: iDestro 
 * @Description:  下列变量的初值分别是什么？
 */ 

#include <iostream>
using namespace std;

string global_str; // ""
int global_int; // 0
int main() {
    int local_int; // 看编译器吧，没优化就是垃圾值
    string local_str; // "" 对象调用默认构造函数创建了空串
    cout << global_str << endl;
    cout << global_int << endl;
    cout << local_str << endl;
    cout << local_int << endl;
    return 0;
}

/* 
 * @Author: iDestro 
 * @Description: 关于下面的代码，请指出每一个变量的类型以及程序结束时它们各自的值。
 */ 


#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;
    // a, b 都为int
    decltype(a) c = a;
    // c为int
    decltype((b)) d = a;
    // d为int&
    ++c;
    ++d;


    // a = 4;
    // b = 4;
    // c = 4;
    // d = 4;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    return 0;
}


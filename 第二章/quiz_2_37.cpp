/* 
 * @Author: iDestro 
 * @Description: 赋值是会产生引用的一类典型表达式，引用的类型就是左值的类型。也就是说，如果i是int，则表达式i=x的类型是int&。根据这一特点，请指出下面的代码中每一个变量的类型和值。
 */ 


#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;
    // a, b 都为int
    decltype(a) c = a;
    // c为int
    decltype(a = b) d = a;
    // d为int&
    cout << a << " " << d << endl;
    d = 100;
    cout << a << " " << d << endl;
    return 0;
}

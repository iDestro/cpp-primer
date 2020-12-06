/* 
 * @Author: iDestro 
 * @Description: 说明由decltype指定类型和由auto指定类型有何区别。
 * 请举出一个例子，decltype指定的类型与auto指定的类型一样；
 * 再举一个例子，decltype指定的类型与auto指定的类型不一样。
 */ 



#include <iostream>
using namespace std;

int main() {
    // 一样的太多了
    // 不一样的有一个，auto会忽略顶层const，而decltype会保留

    const int i = 0;
    auto a = i;
    decltype(i) b = 3;
    a = 9; // 不报错，a为int型
    // b = 9; 报错， b为const int型
    return 0;
}
/* 
 * @Author: iDestro 
 * @Description: 下面两组定义是否有区别，如果有，请叙述之：
 * int month = 9, day = 7;
 * int month = 09, day = 07;
 * 前面是整型字面量，是用十进制表示的
 * 后面同样是整型字面量，但是是用八进制表示的，而且09字面量是错的
 */ 

// 测试
#include <iostream>
using namespace std;

int main() {
    int month = 9, day = 7;
    int month0 = 09, day0 = 07;
    cout << month << ' ' <<  month0 << endl;
    cout << day << ' ' << day0 << endl;
    return 0;
}
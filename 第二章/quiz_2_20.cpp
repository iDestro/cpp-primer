/* 
 * @Author: iDestro 
 * @Description: 请叙述下面这段代码的作用。
 * int i = 42;
 * int *p1 = &i;
 * *p1 = *p1 * *p1;
 * 
 * 求i的平方
 */ 


#include <iostream>
using namespace std;

int main() {
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    cout << *p1 << endl;
    return 0;
}

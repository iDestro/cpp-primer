/* 
 * @Author: iDestro 
 * @Description: 对于下面的这些语句，请说明对象被声明成了顶层const还是底层const？
 * const int v2 = 0;
 * 顶层const
 * int v1 = v2;
 * 无const
 * int *p1 = &v1, &r1 = v1;
 * 无const
 * const int *p2 = &v2, *const p3 = &i, &r2 = v2;
 * p2底层const， p3顶层、底层const， r2底层const
 */ 


#include <iostream>
using namespace std;

int main() {
    return 0;
}

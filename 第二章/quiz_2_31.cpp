/* 
 * @Author: iDestro 
 * @Description: 假设已有上一个练习中所做的那些声明，则下面的哪些语句是合法的？请说明顶层const和底层const在每个例子中有何体现。
 * r1 = v2;
 * 不合法，v2是个常量，r1是一个int型的引用
 * p1 = p2; 
 * 不合法， p1所指向的值可变，而p2所指向的值不可变
 * p2 = p1;
 * 合法
 * p1 = p3;
 * 不合法，p1的值可变， p3的值不能变 
 * p2 = p3;
 * p2=p3是合法的，p2和p3包含相同的底层const，p3的顶层const则可以忽略不计
 */ 


#include <iostream>
using namespace std;

int main() {
    return 0;
}

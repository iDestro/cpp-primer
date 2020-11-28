/* 
 * @Author: iDestro 
 * @Description: 编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
 */ 

#include<iostream>

int main() {
    int cnt = 11;
    while (cnt-- > 0) {
        std::cout << cnt << std::endl;
    }
    return 0;
}

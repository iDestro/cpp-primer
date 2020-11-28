/* 
 * @Author: iDestro 
 * @Description: 编写程序，使用while循环将50到100的整数相加。
 */ 

#include<iostream>

int main() {
    int sum = 0, i = 50;
    while (i <= 100) {
        sum += i;
        i++;
    }
    std::cout << "50+51+...+100=" << sum << std::endl;
    return 0;
}
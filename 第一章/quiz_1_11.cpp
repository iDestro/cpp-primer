/* 
 * @Author: iDestro 
 * @Description: 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
 */ 


#include<iostream>

int main() {
    std::cout << "请输出两个整数：" << std::endl;
    int a, b;
    std::cin >> a >> b;
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}
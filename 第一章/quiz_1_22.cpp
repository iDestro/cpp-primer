/* 
 * @Author: iDestro 
 * @Description: 读取多个具有相同ISBN的销售记录，输出所有记录的和。
 */ 

#include<iostream>
#include"header/Sales_item.h"
using namespace std;

int main() {
    Sales_item item, sum;
    while (cin >> item) {
        sum += item;
    }
    cout << sum;
    return 0;
}
/* 
 * @Author: iDestro 
 * @Description: 读取一组书籍销售记录，并将每条记录打印到标准输出上。
 */ 

#include<iostream>
#include"header/Sales_item.h"

using namespace std;

int main() {
    Sales_item item;
    while (cin >> item) {
        cout << item << endl;
    }
    return 0;
}
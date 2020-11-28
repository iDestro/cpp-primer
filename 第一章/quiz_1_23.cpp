/* 
 * @Author: iDestro 
 * @Description: 读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。
 */ 

#include <iostream>
#include "header/Sales_item.h"
#include <map>
using namespace std;
int main() {
    Sales_item cur_item, val_item;
    if (cin >> cur_item) {
        int cnt = 1;
        while (cin >> val_item) {
            if (val_item.isbn() == cur_item.isbn()) {
                cnt++;
            } else {
                cout << cur_item << " occurs " << cnt << " times " << endl;
                cur_item = val_item;
                cnt = 1;
            }
        }
        cout << cur_item << " occurs " << cnt << " times " << endl;
    }
    return 0;
}
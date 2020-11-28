/* 
 * @Author: iDestro 
 * @Description: 借助网站上的Sales_item.h头文件，编译并运行本节给出的书店程序。
 */ 

#include <iostream>
#include "header/Sales_item.h"

using namespace std;

int main() {
    Sales_item total;
    if (cin >> total) {
        Sales_item trans;
        while(cin >> trans) {
            if (trans.isbn() == total.isbn()) {
                total += trans;
            } else {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}

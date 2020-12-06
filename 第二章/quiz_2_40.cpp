/* 
 * @Author: iDestro 
 * @Description: 根据自己的理解写出Sales_data类，最好与书中例子有所区别。
 */ 



#include <iostream>
using namespace std;

class Sales_item {
public:
    Sales_item(string i, double p):isbn(i), price(p), units_sold(0), revenue(0) {}
private:
    string isbn;
    unsigned units_sold;
    double price;
    double revenue;
};

int main() {
    return 0;
}
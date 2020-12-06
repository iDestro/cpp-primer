/* 
 * @Author: iDestro 
 * @Description: 使用你自己的Sales_data类重写20、21页的练习。眼下把类和main函数放一个文件里面
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
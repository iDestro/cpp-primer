/* 
 * @Author: iDestro 
 * @Description: 编写程序，从cin读取一组数，输出其和。
 */ 


#include<iostream>
#include<sstream>
using namespace std;
int main() {
    int sum = 0;
    int tmp;
    string exp = "";
    while (cin >> tmp) {
        sum += tmp;
        exp += "+"+to_string(tmp);
    }
    cout << exp.substr(1, exp.length()) << "=" << sum << endl;
    return 0;
}
/* 
 * @Author: iDestro 
 * @Description: 编译本节内容的程序。分别输入全部一样的值与全部不相同的值
 */ 

#include<iostream>
using namespace std;

int main() {
    int currval = 0, val = 0;
    if (cin >> currval) {
        int cnt = 1;
        while (cin >> val) {
            if (val == currval) {
                cnt++;
            } else {
                cout << currval << " occurs " << cnt << " times" << endl;
                currval =val;
                cnt = 1;
            }
        }
        cout << currval << " occurs " << cnt << " times" << endl;
    }
    return 0;
}
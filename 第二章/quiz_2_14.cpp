/* 
 * @Author: iDestro 
 * @Description: 下面的程序合法吗？如果合法，它将输出什么？
 * 不合法，输出为100， 45
 */ 


// 测试

#include <iostream> 
using namespace std;

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i) {
        sum += i;
    }
    cout << i << ' ' << sum << endl;
    return 0;
}

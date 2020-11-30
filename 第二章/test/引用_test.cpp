/* 
 * @Author: iDestro 
 * @Description:  
 */ 

#include <iostream>
using namespace std;

int main() {
    // int &a = 1.0;会报错，对于这种情况，引用必须是左值
    const int &a = 1.0;
    cout << a;
    return 0;
}
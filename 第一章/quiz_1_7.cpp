/* 
 * @Author: iDestro 
 * @Description: 编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。
 */ 

#include<iostream>
/**
 * /**/ 
 * 
 */
int main() {

    return 0;
}
// 输出
// quiz_1_3.cpp:8:34: error: expected ';' before 'return'
//      std::cout << "Hello， World"
//                                   ^
//                                   ;
//      return 0;
//      ~~~~~~                        

// [quiz_1_3.cpp 2020-11-26 03:11:17.782]
// ,,
// [quiz_1_3.cpp 2020-11-26 03:11:29.180]
// ,,
// [quiz_1_4.cpp 2020-11-26 03:12:44.452]
// ,,
// [quiz_1_7.cpp 2020-11-26 03:26:52.882]
// ,,quiz_1_7.cpp:8:4: warning: "/*" within comment [-Wcomment]
//   * /**/
     
// quiz_1_7.cpp:10:3: error: expected unqualified-id before '/' token
//   */
//    ^
// /* 
//  * @Author: iDestro 
//  * @Description: 指出下列哪些输出语句是合法的（如果有的话）：
//  * std::cout << "/*";
//  * std::cout << "*/";
//  * std::cout << /* "*/" */;
//  * std::cout << /* "*/" /* "/*" */;
//  */ 

#include <iostream>

int main() {
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/" */;
    // std::cout << /* "*/" /* "/*" */;
    std::cout << "/* \"*/\" */";
    std::cout << "/* \"*/\" /* \"/*\" */";
    return 0;
}
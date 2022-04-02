#include "IostreamTest.h"
#include <iostream> // iostream 包含两个基础类型istream 和 ostream 表示输入输出流   定义了四个IO对象 cin, cout, cerr clog
void IostreamTest::run()
{
    //----------------------------------输入输出------------------------------------------------
   //std::cout << "输入两个数字\n" << std::endl; 等于下面两行 
    std::cout << "输入两个数字\n";
    std::cout << std::endl;
    int v1 = 0; int v2 = 0;
    //std::cin >> v1 >> v2; 等于下面两行 
    std::cin >> v1;
    std::cin >> v2;
    std::cout << v1 << "与" << v2 << "的和为" << v1 + v2 << std::endl;
    //std::cerr << "错误";
    //std::clog << "日志";
}

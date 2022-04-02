// learncpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include "WhileTest.h"
#include "IostreamTest.h"

using namespace std;
int main()
{
   
    IostreamTest iostreamTest;
    iostreamTest.run();

    WhileTest whileTest ;
    whileTest.run();

    //----------------------------------
    std::cout << "输入任意数字，用空格分隔,\\n结束输入" << std::endl;
    int sum = 0, value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "输入的所有数字的和为：" << sum << std::endl;

    
    
    
    
    
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

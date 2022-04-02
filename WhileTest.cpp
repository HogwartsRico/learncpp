#include "WhileTest.h"



// 成员函数定义
void WhileTest::run()
{
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    std::cout << "从1加到10的和为:" << sum << std::endl;
}

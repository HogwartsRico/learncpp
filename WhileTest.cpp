#include "WhileTest.h"
// 成员函数定义
void WhileTest::run()
{
    int sum = 0, val = 1, end = 0;
    std::cout << "输入想从1加到几？:" << std::endl;
    std::cin >> end;
    while (val <= end) {
        sum += val;
        ++val;
    }
    std::cout << "从1加到" << end << "的和为:" << sum << std::endl;
}

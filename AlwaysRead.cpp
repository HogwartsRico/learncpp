#include "AlwaysRead.h"
void AlwaysRead::run()
{
    //---------------------------读取数量不定的输入数据------------------------------------
    std::cout << "输入任意数字，用空格分隔,ctrl + z 然后回车 结束输入" << std::endl;
    int sum = 0, value = 0;
    while (std::cin >> value) { //当我们使用一个istream对象作为条件时,其效果时检测流的状态。 如果流是有效的,即流未遇到错误,那么检测成功.当遇到文件结束符,或遇到一个无效输入时(例如不是整数),istream就会变成无效，会使条件变为假  windows中时ctrl + z, mac/linux中是 ctrl + d
        sum += value;
    }
    std::cout << "输入的所有数字的和为：" << sum << std::endl;

}

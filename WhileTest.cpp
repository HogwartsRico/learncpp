#include "WhileTest.h"



// ��Ա��������
void WhileTest::run()
{
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    std::cout << "��1�ӵ�10�ĺ�Ϊ:" << sum << std::endl;
}

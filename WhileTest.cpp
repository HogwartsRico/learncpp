#include "WhileTest.h"
// ��Ա��������
void WhileTest::run()
{
    int sum = 0, val = 1, end = 0;
    std::cout << "�������1�ӵ�����:" << std::endl;
    std::cin >> end;
    while (val <= end) {
        sum += val;
        ++val;
    }
    std::cout << "��1�ӵ�" << end << "�ĺ�Ϊ:" << sum << std::endl;
}

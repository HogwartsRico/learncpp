#include "IostreamTest.h"
#include <iostream> // iostream ����������������istream �� ostream ��ʾ���������   �������ĸ�IO���� cin, cout, cerr clog
void IostreamTest::run()
{
    //----------------------------------�������------------------------------------------------
   //std::cout << "������������\n" << std::endl; ������������ 
    std::cout << "������������\n";
    std::cout << std::endl;
    int v1 = 0; int v2 = 0;
    //std::cin >> v1 >> v2; ������������ 
    std::cin >> v1;
    std::cin >> v2;
    std::cout << v1 << "��" << v2 << "�ĺ�Ϊ" << v1 + v2 << std::endl;
    //std::cerr << "����";
    //std::clog << "��־";
}

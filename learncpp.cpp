// learncpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include "WhileTest.h"
#include "IostreamTest.h"
#include "AlwaysRead.h"


using namespace std;
int main()
{
   //输入输出
    IostreamTest iostreamTest;
    iostreamTest.run();

    //while
    WhileTest whileTest ;
    whileTest.run();

    //读取数量不定的输入数据 
    AlwaysRead alwaysread;
    alwaysread.run();
    
    //指针 
    int apple = 42;
    int *p = &apple;

    cout << "直接用变量输出:apple= "<< apple << endl;
    cout << "使用指针输出:" << * p << endl;
    cout << "对指针解引用得到所指对象，对其赋值" << endl;

    *p = 0;
    cout << *p << endl; //其实就是apple这个值 
    cout << apple << endl;
    
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

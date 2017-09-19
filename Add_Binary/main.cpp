#include <iostream>                
#include "isolution.h"              //调用定义的函数


int main()                             //定义主函数
{
	Solution lee;
	string a, b;                       //先定义要输入两个数的类型
	std::cout << "Please Input Two Binary Numbers:" << std::endl;     //输出提醒
	std::cin >> a;                        //std::cin  可以从键盘输入数据a 输入后回车结束
	std::cin >> b;
	std::cout <<"Result: "<< lee.addBinary(a, b) << std::endl;         //std标准库所使用的命名空间，std::count表示使用命名空间std中的名字count   ::作用域运算符
	std::cout << "Add Binary Succeed !" << std::endl;
	system("pause");                        //可以加一句pause使系统停下来
}
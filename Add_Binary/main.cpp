#include <iostream>                
#include "isolution.h"              //���ö���ĺ���


int main()                             //����������
{
	Solution lee;
	string a, b;                       //�ȶ���Ҫ����������������
	std::cout << "Please Input Two Binary Numbers:" << std::endl;     //�������
	std::cin >> a;                        //std::cin  ���ԴӼ�����������a �����س�����
	std::cin >> b;
	std::cout <<"Result: "<< lee.addBinary(a, b) << std::endl;         //std��׼����ʹ�õ������ռ䣬std::count��ʾʹ�������ռ�std�е�����count   ::�����������
	std::cout << "Add Binary Succeed !" << std::endl;
	system("pause");                        //���Լ�һ��pauseʹϵͳͣ����
}
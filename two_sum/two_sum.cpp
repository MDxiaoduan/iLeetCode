#include <iostream>
#include "two_sum.h"  //���ö���ĺ���

int main()
{
	two_sum_solution lee;
	
	int B[7] = { 2,7,11,15 };
	int t = 9;
	int l = 4;
	std::cout << lee.twoSum(B, t, l)[0] << lee.twoSum(B, t, l)[1] << std::endl; // �ֱ����������λ
	std::cout << "Hello c++ !" << std::endl;
}
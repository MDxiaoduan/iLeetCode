## c++ iLeetCode Learning1  2017/8/15
.h : 全局变量申明   放在头文件文件夹下
.cpp :  全局变量的定义（及初始化）全局函数的定义  放在原文件文件夹下

[LeetCode Two_Sum](https://leetcode.com/problems/two-sum/description/)

c++ two_sum.h

class two_sum_solution {         //定义类名称
public:                          //用户代码（类外）可以访问public成员而不能访问private成员
	int twoSum(int nums[], int target, int length)     # twoSum函数 输入参量nums数组 两个int的值
	{
		for (int i = 0; i < length; i++) {
			for (int j = i + 1; j < length; j++) {
				if (nums[j] == target - nums[i]) {
					return  i, j;          //一次只能返回一个值！（右边j）
				}
			}
		}
	}

};

main.cpp:
#include <iostream>                
#include "two_sum.h"              //调用定义的函数


int main()
{
	two_sum_solution lee;           // 将函数two_sum_solution另成lee名
	int B[7] = { 2,7,11,15 };
	int t = 9;
	int l = 4;
	std::cout << lee.twoSum(B, t, l) << std::endl;   //输出函数值
	std::cout << "Hello c++ !" << std::endl;
	return 0;
}

run:

1                               //系统只能返回一个值
Hello c++ !

########## two_sum_solution.h
class two_sum_solution {
public:

	int* twoSum(int nums[], int target, int length)
	{
		int* temp = new int[2];                   // 指针数组来存储数据
		for (int i = 0; i < length; i++) {
			for (int j = i + 1; j < length; j++) {
				if (nums[j] == target - nums[i]) {
					temp[0] = i;
					temp[1] = j;
					return temp;                 // 返回数组
				}
			}
		}
	}

};

main.cpp

#include <iostream>
#include "two_sum.h"

int main()
{
	two_sum_solution lee;
	
	int B[7] = { 2,7,11,15 };
	int t = 9;
	int l = 4;
	std::cout << lee.twoSum(B, t, l)[0] << lee.twoSum(B, t, l)[1] << std::endl;        // 分别显示数组两位
	std::cout << "Hello c++ !" << std::endl;
	return 0;
}

run:

01                              
Hello c++ !
#################################end##########################################


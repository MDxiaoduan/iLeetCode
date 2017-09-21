#include <iostream>                
#include "isolution.h"              //调用定义的函数
#include <vector>
using std::vector;
using namespace std;

ListNode *create_linkedlist(std::initializer_list<int> lst)    
{
	auto iter = lst.begin();
	ListNode *head = lst.size() ? new ListNode(*iter++) : NULL;
	for (ListNode *cur = head; iter != lst.end(); cur = cur->next)
		cur->next = new ListNode(*iter++);
	return head;
}


int main()                             //定义主函数
{
	Solution lee;                    //引用 用别名lee来引用Solution
	printf("-------------------------------------\r\n");
	cout << "输入第一个3位数的各位--输入一个数要回车一下，一行只能输入一个数" << endl;
	int count1 = 3;
	//cin >> count1;
	int *arr1 = new int[count1]; //动态内存分配count个int的数组
	for (int i = 0; i < count1; i++)
	{
		cin >> arr1[i];
	}
	printf("-------------------------------------\r\n");
	cout << "输入第二个3位数的各位----输入一个数要回车一下，一行只能输入一个数" << endl;
	int count2=3;
	//cin >> count2;
	int *arr2= new int[count2]; //动态内存分配count个int的数组
	for (int j = 0; j < count2; j++)
	{
		cin >> arr2[j];
	}
	printf("-------------------------------------\r\n");
	ListNode *l1 = create_linkedlist({ arr1[0],arr1[1],arr1[2] });  //
	ListNode *l2 = create_linkedlist({ arr2[0],arr2[1],arr2[2] });
	ListNode *ret = lee.addTwoNumbers(l1, l2);
	for (ListNode *cur = ret; cur; cur = cur->next)
		cout << cur->val << "->";
	printf("\r\n");
	cout << "------------------------------" << endl;
	cout << "Add Numbers Succeed !" << std::endl;
	system("pause");                      
}
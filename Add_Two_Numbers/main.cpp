#include <iostream>                
#include "isolution.h"              //���ö���ĺ���
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


int main()                             //����������
{
	Solution lee;                    //���� �ñ���lee������Solution
	printf("-------------------------------------\r\n");
	cout << "�����һ��3λ���ĸ�λ--����һ����Ҫ�س�һ�£�һ��ֻ������һ����" << endl;
	int count1 = 3;
	//cin >> count1;
	int *arr1 = new int[count1]; //��̬�ڴ����count��int������
	for (int i = 0; i < count1; i++)
	{
		cin >> arr1[i];
	}
	printf("-------------------------------------\r\n");
	cout << "����ڶ���3λ���ĸ�λ----����һ����Ҫ�س�һ�£�һ��ֻ������һ����" << endl;
	int count2=3;
	//cin >> count2;
	int *arr2= new int[count2]; //��̬�ڴ����count��int������
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
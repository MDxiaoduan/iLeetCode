// LeetCode, Add Two Numbers
//  ʱ�临�Ӷ�O(m+n)  �ռ临�Ӷ�O(1)
//������ڵ� --���ɱ䳤�ȵ�����
struct ListNode {                   //����һ��������ڵ�ṹListNode  ����ÿһ��Ԫ�ض���һ���ڵ�  structĬ�Ϸ����޶���Ϊpublic
	//�ڵ������Ԫ�أ�����val�ʹ洢��һ������ַ��ָ����next
	int val;                              //val�洢�ڵ�����
	ListNode *next;                 //����ָ����,����Ϊnext  next��ָ��ListNode*�������ݵ�ָ��    next���ܣ�ָ����һ���ڵ�
	ListNode(int x) : val(x), next(nullptr) { }     //nullptr ����ָ���ʼ��ָ��    ����һ���ڵ�Ҫ������� ����Ǻ��������  ʹ��ListNode(x)  xֵ����val��ֵ��
};

class Solution {        //Solution����ؼ���
public:                   //�����޶���public ���Է��ʱ�¶��ȥ
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {          //����һ��ָ������ṹaddTwoNumbers  �����������µ�����*l1 *l2
		ListNode dummy(-1);                                                 // ͷ�ڵ�
		int carry = 0;                                              //��λ
		ListNode *prev = &dummy;                        //ָ��prevȡlist dummy
		for (ListNode *pa = l1, *pb = l2;                  //����һ��ָ��ڵ�paȡl1
			pa != nullptr || pb != nullptr;                    //||����ṹ �ж������б��ǲ��ǿյ���
			pa = pa == nullptr ? nullptr : pa->next,    //�ж�pa�ǲ��ǿ� ���ǵû���ָ��ָ����һ���ڵ�ֵ   pa = pa-> next�����ڵ�ָ����ָ����һ���ڵ�
			pb = pb == nullptr ? nullptr : pb->next,
			prev = prev->next) {
			const int ai = pa == nullptr ? 0 : pa->val;      //const��������ݲ��ܱ�  pa���ǿ��� ai��pa��aiȡ�ڵ�pa�������ֵval��,����ȡ0
			const int bi = pb == nullptr ? 0 : pb->val;
			const int value = (ai + bi + carry) % 10;         //����
			carry = (ai + bi + carry) / 10;                        //��λ
			prev->next = new ListNode(value);              // β��ֵ  new������Ӷ��������ڴ��ȡһ���µĽڵ㣬�ڵ�������洢����value
		}
		//delete prev;          //�ͷ��ڴ�
		if (carry > 0)
			prev->next = new ListNode(carry);     //�洢��������λ
		return dummy.next;         //����dummy
	}
};

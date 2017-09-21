// LeetCode, Add Two Numbers
//  时间复杂度O(m+n)  空间复杂度O(1)
//单链表节点 --》可变长度的数组
struct ListNode {                   //定义一个单链表节点结构ListNode  链表每一个元素都是一个节点  struct默认访问限定符为public
	//节点的两个元素：数据val和存储下一个结点地址的指针域next
	int val;                              //val存储节点数据
	ListNode *next;                 //定义指针域,名字为next  next即指向ListNode*类型数据的指针    next功能：指向下一个节点
	ListNode(int x) : val(x), next(nullptr) { }     //nullptr ：空指针初始化指针    任意一个节点要便利输出 这句是后面输出用  使用ListNode(x)  x值就是val的值了
};

class Solution {        //Solution：类关键字
public:                   //访问限定符public 可以访问暴露出去
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {          //定义一个指针链表结构addTwoNumbers  里面有两个新的链表*l1 *l2
		ListNode dummy(-1);                                                 // 头节点
		int carry = 0;                                              //进位
		ListNode *prev = &dummy;                        //指针prev取list dummy
		for (ListNode *pa = l1, *pb = l2;                  //定义一个指针节点pa取l1
			pa != nullptr || pb != nullptr;                    //||：或结构 判断两个列表是不是空的了
			pa = pa == nullptr ? nullptr : pa->next,    //判断pa是不是空 不是得话到指针指向下一个节点值   pa = pa-> next即将节点指针域指向下一个节点
			pb = pb == nullptr ? nullptr : pb->next,
			prev = prev->next) {
			const int ai = pa == nullptr ? 0 : pa->val;      //const定义的数据不能变  pa不是空则 ai是pa（ai取节点pa数据域的值val）,否则取0
			const int bi = pb == nullptr ? 0 : pb->val;
			const int value = (ai + bi + carry) % 10;         //余数
			carry = (ai + bi + carry) / 10;                        //进位
			prev->next = new ListNode(value);              // 尾插值  new运算符从堆中申请内存获取一个新的节点，节点数据域存储余数value
		}
		//delete prev;          //释放内存
		if (carry > 0)
			prev->next = new ListNode(carry);     //存储运算后最高位
		return dummy.next;         //返回dummy
	}
};

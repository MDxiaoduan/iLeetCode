//LeetCode, Add Binary
// 时间复杂度 O(n)，空间复杂度 O(1)
#include<string>              //头文件包含命令
using std::string;             //使用using声明，这样后面可以直接使用string代替 std::string  令命名空间中某个名字可被程序直接使用

class Solution {               //定义class类 自己的数据结构
public:                          //public类型
	string addBinary(string a, string b) {         //定义string函数addBinary  输入两个string类型 a, b
		string result;                                      //输出结果result是string类型
		string s = "学习LeetCode";
		const size_t n = a.size() > b.size() ? a.size() : b.size();     //const 类型说明符 变量名  size_t 是无符号的整型, 常用于表示大小和字符长度
		// condition？ expr1：expr2 是条件运算符 condition成立对expr1求值，否则对expr2求值  
		printf("n的值=%d", n);                             //输出n的值 printf支持汉字  这里a的尺寸是2所以输出2     
		reverse(a.begin(), a.end());                  //reverse 逆转元素 将区间[beg,end)内的元素全部逆序
		reverse(b.begin(), b.end());                 //begin end 是string vector的成员 返回指向第一个（最后）元素的迭代器  .运算符  左侧是一个类类型对象 右侧是此对象的一个成员
		printf("\r\n");                                      // \r\n回车换行
		
		int carry = 0;                              //进位值
		for (size_t i = 0; i < n; i++) {        // i = 0, 1   a[i]  "11"    b[i] "1" 
		const int ai = i < a.size() ? a[i] - '0' : 0;       // i =0< 2 --> ai = a[i] - '0' = '1' - '0' = '1'                      i = 1  ai = 1
		const int bi = i < b.size() ? b[i] - '0' : 0;      // i = 0 < 1 -->bi = '1' - '0' = '1'                                    i = 1   bi = 0
		const int val = (ai + bi + carry) % 2;         //val表示一次运算后的余数   两个二进制数相加在加上进位值    %求余运算   i = 0 -->val = 0    i = 1 --> val = 0
		carry = (ai + bi + carry) / 2;                   //carry存储一次二值运算后的进位值   /除法运算  保留整数      i = 0 --> carry = 1        i = 1 -->  carry = 1
		result.insert(result.begin(), val + '0');       // insert 插值运算 在result中插入值val(把val插到result最开始.begin) i = 0 --> result = 0    i = 1  result = 00
		printf("i= %d\r\n  ai=%d\r\n  bi=%d\r\n  val=%d\r\n  carry=%d\r\n", i, ai, bi, val, carry);      //输出各个值  换行加到后面
		}
		printf("%s\r\n", s.c_str());                  //汉字字符输出方法
		if (carry == 1) {
		result.insert(result.begin(), '1');                //进位还有一个1加进去    result = 100
		}
		
		return result;                          // 返回结果
	}
}; 

//LeetCode, Add Binary
// ʱ�临�Ӷ� O(n)���ռ临�Ӷ� O(1)
#include<string>              //ͷ�ļ���������
using std::string;             //ʹ��using�����������������ֱ��ʹ��string���� std::string  �������ռ���ĳ�����ֿɱ�����ֱ��ʹ��

class Solution {               //����class�� �Լ������ݽṹ
public:                          //public����
	string addBinary(string a, string b) {         //����string����addBinary  ��������string���� a, b
		string result;                                      //������result��string����
		string s = "ѧϰLeetCode";
		const size_t n = a.size() > b.size() ? a.size() : b.size();     //const ����˵���� ������  size_t ���޷��ŵ�����, �����ڱ�ʾ��С���ַ�����
		// condition�� expr1��expr2 ����������� condition������expr1��ֵ�������expr2��ֵ  
		printf("n��ֵ=%d", n);                             //���n��ֵ printf֧�ֺ���  ����a�ĳߴ���2�������2     
		reverse(a.begin(), a.end());                  //reverse ��תԪ�� ������[beg,end)�ڵ�Ԫ��ȫ������
		reverse(b.begin(), b.end());                 //begin end ��string vector�ĳ�Ա ����ָ���һ�������Ԫ�صĵ�����  .�����  �����һ�������Ͷ��� �Ҳ��Ǵ˶����һ����Ա
		printf("\r\n");                                      // \r\n�س�����
		
		int carry = 0;                              //��λֵ
		for (size_t i = 0; i < n; i++) {        // i = 0, 1   a[i]  "11"    b[i] "1" 
		const int ai = i < a.size() ? a[i] - '0' : 0;       // i =0< 2 --> ai = a[i] - '0' = '1' - '0' = '1'                      i = 1  ai = 1
		const int bi = i < b.size() ? b[i] - '0' : 0;      // i = 0 < 1 -->bi = '1' - '0' = '1'                                    i = 1   bi = 0
		const int val = (ai + bi + carry) % 2;         //val��ʾһ������������   ����������������ڼ��Ͻ�λֵ    %��������   i = 0 -->val = 0    i = 1 --> val = 0
		carry = (ai + bi + carry) / 2;                   //carry�洢һ�ζ�ֵ�����Ľ�λֵ   /��������  ��������      i = 0 --> carry = 1        i = 1 -->  carry = 1
		result.insert(result.begin(), val + '0');       // insert ��ֵ���� ��result�в���ֵval(��val�嵽result�ʼ.begin) i = 0 --> result = 0    i = 1  result = 00
		printf("i= %d\r\n  ai=%d\r\n  bi=%d\r\n  val=%d\r\n  carry=%d\r\n", i, ai, bi, val, carry);      //�������ֵ  ���мӵ�����
		}
		printf("%s\r\n", s.c_str());                  //�����ַ��������
		if (carry == 1) {
		result.insert(result.begin(), '1');                //��λ����һ��1�ӽ�ȥ    result = 100
		}
		
		return result;                          // ���ؽ��
	}
}; 

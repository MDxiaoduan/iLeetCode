class two_sum_solution {
public:        //�û����루���⣩���Է���public��Ա�����ܷ���private��Ա

	int* twoSum(int nums[], int target, int length)
	{
		int* temp = new int[2];               // ָ���������洢����
		for (int i = 0; i < length; i++) {
			for (int j = i + 1; j < length; j++) {
				if (nums[j] == target - nums[i]) {
					temp[0] = i;
					temp[1] = j;
					return temp;           //return{i, j}--error  ֻ�ܷ���һ��ֵ
				}
			}
		}
	}

};


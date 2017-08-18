class two_sum_solution {
public:        //用户代码（类外）可以访问public成员而不能访问private成员

	int* twoSum(int nums[], int target, int length)
	{
		int* temp = new int[2];               // 指针数组来存储数据
		for (int i = 0; i < length; i++) {
			for (int j = i + 1; j < length; j++) {
				if (nums[j] == target - nums[i]) {
					temp[0] = i;
					temp[1] = j;
					return temp;           //return{i, j}--error  只能返回一个值
				}
			}
		}
	}

};


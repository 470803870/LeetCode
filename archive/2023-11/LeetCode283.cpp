//283. �ƶ���
//����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
//
//��ע�� �������ڲ���������������ԭ�ض�������в�����
//
//
//
//ʾ�� 1:
//
//����: nums = [0, 1, 0, 3, 12]
//��� : [1, 3, 12, 0, 0]
//ʾ�� 2 :
//
//	���� : nums = [0]
//	��� : [0]
//
//
//	��ʾ :
//
//	1 <= nums.length <= 104
//	- 231 <= nums[i] <= 231 - 1
//
//
//	���ף����ܾ���������ɵĲ���������
#include "LeetCode283.h"

void Solution::moveZeroes(vector<int>& nums) {
	if (nums.size() == 1)
	{
		return;
	}
	int idxZero = 0, idxNoZero = 0, num = 0;
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (nums[i] != 0) {
			idxNoZero = i;
		}
		else if (nums[i] == 0 & idxZero == -1)
		{
			idxZero = i;
		}
		if (idxNoZero > idxZero)
		{
			nums[idxZero] = nums[idxNoZero];
			nums[idxNoZero] = 0;
			for (size_t i = idxZero; i < nums.size(); i++)
			{
				if (nums[i] == 0)
				{
					idxZero = i; break;
				}
			}
		}
	}
	return;
};
//����һ��˫ָ��
//˼·���ⷨ
//
//ʹ��˫ָ�룬��ָ��ָ��ǰ�Ѿ�����õ����е�β������ָ��ָ����������е�ͷ����
//
//��ָ�벻�������ƶ���ÿ����ָ��ָ���������������ָ���Ӧ����������ͬʱ��ָ�����ơ�
//
//ע�⵽�������ʣ�
//
//��ָ����߾�Ϊ��������
//
//��ָ�����ֱ����ָ�봦��Ϊ�㡣
//
//���ÿ�ν��������ǽ���ָ���������ָ��ķ������������ҷ����������˳��δ�ı䡣
//class Solution {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int n = nums.size(), left = 0, right = 0;
//		while (right < n) {
//			if (nums[right]) {
//				swap(nums[left], nums[right]);
//				left++;
//			}
//			right++;
//		}
//	}
//};
//���Ӷȷ���
//
//ʱ�临�Ӷȣ�O(n)O(n)O(n)������ nnn Ϊ���г��ȡ�ÿ��λ�����౻�������Ρ�
//
//�ռ临�Ӷȣ�O(1)O(1)O(1)��ֻ��Ҫ�����Ŀռ������ɱ�����
 
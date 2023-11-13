//1822. ����Ԫ�ػ��ķ���
//��֪���� signFunc(x) ������� x �����������ض�ֵ��
//
//��� x ������������ 1 ��
//��� x �Ǹ��������� - 1 ��
//��� x �ǵ��� 0 ������ 0 ��
//����һ���������� nums ���� product Ϊ���� nums ������Ԫ��ֵ�ĳ˻���
//
//���� signFunc(product) ��
//
//
//
//ʾ�� 1��
//
//���룺nums = [-1, -2, -3, -4, 3, 2, 1]
//�����1
//���ͣ�����������ֵ�ĳ˻��� 144 ���� signFunc(144) = 1
//ʾ�� 2��
//
//���룺nums = [1, 5, 0, 2, -3]
//�����0
//���ͣ�����������ֵ�ĳ˻��� 0 ���� signFunc(0) = 0
//ʾ�� 3��
//
//���룺nums = [-1, 1, -1, 1, -1]
//����� - 1
//���ͣ�����������ֵ�ĳ˻��� - 1 ���� signFunc(-1) = -1
//
//
//��ʾ��
//
//1 <= nums.length <= 1000
//- 100 <= nums[i] <= 100
#include "LeetCode1822.h"

int Solution::arraySign(vector<int>& nums) {
	int result = 1;
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (nums[i] == 0)
		{
			return 0;
		}
		else if (nums[i] > 0)
		{
			result *= 1;
		}
		else if (nums[i] < 0)
		{
			result *= -1;
		}
	}
	return result;
};
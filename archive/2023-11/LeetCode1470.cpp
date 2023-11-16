//1470. ������������
//����һ������ nums ���������� 2n ��Ԫ�أ���[x1, x2, ..., xn, y1, y2, ..., yn] �ĸ�ʽ���С�
//
//���㽫���鰴[x1, y1, x2, y2, ..., xn, yn] ��ʽ�������У��������ź�����顣
//
//
//
//ʾ�� 1��
//
//���룺nums = [2, 5, 1, 3, 4, 7], n = 3
//�����[2, 3, 5, 4, 1, 7]
//���ͣ����� x1 = 2, x2 = 5, x3 = 1, y1 = 3, y2 = 4, y3 = 7 �����Դ�Ϊ[2, 3, 5, 4, 1, 7]
//ʾ�� 2��
//
//���룺nums = [1, 2, 3, 4, 4, 3, 2, 1], n = 4
//�����[1, 4, 2, 3, 3, 2, 4, 1]
//ʾ�� 3��
//
//���룺nums = [1, 1, 2, 2], n = 2
//�����[1, 2, 1, 2]
//
//
//��ʾ��
//
//1 <= n <= 500
//nums.length == 2n
//1 <= nums[i] <= 10 ^ 3
#include"LeetCode1470.h"
vector<int> Solution::shuffle(vector<int>& nums, int n) {
	vector<int> result;
	for (size_t i = 0; i < n; i++)
	{
		result.push_back(nums[i]);
		result.push_back(nums[i + n]);
	}
	return result;
};
//����һ��һ�α���
//�� ans\textit{ ans }ans ��ʾ������飬���� nums\textit{ nums }nums �� ans\textit{ ans }ans �ĳ��ȶ��� 2n2n2n������ 0��i < n0 \le i < n0��i < n��������������Ĺ������£�
//
//	nums[i]\textit{ nums }[i]nums[i] � ans[2��i]\textit{ ans }[2 \times i]ans[2��i]��
//
//	nums[i + n]\textit{ nums }[i + n]nums[i + n] � ans[2��i + 1]\textit{ ans }[2 \times i + 1]ans[2��i + 1]��
//
//	���ݸù���ԭ���� nums\textit{ nums }nums �е�Ԫ���������������� ans\textit{ ans }ans �У����ɵõ��������к�����顣
//class Solution {
//public:
//	vector<int> shuffle(vector<int>& nums, int n) {
//		vector<int> ans(2 * n);
//		for (int i = 0; i < n; i++) {
//			ans[2 * i] = nums[i];
//			ans[2 * i + 1] = nums[i + n];
//		}
//		return ans;
//	}
//};
//���Ӷȷ���
//
//ʱ�临�Ӷȣ�O(n)O(n)O(n)������ nnn �Ǹ����Ĳ�������Ҫ��������Ϊ 2n2n2n ������ nums\textit{ nums }nums һ�ν������������У�ÿ��Ԫ���������е�ʱ���� O(1)O(1)O(1)��
//
//�ռ临�Ӷȣ�O(1)O(1)O(1)��ע�ⷵ��ֵ������ռ临�Ӷȡ�
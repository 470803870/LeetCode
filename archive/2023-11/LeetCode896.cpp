//896. ��������
//��������ǵ��������򵥵��ݼ��ģ���ô���� ���� �ġ�
//
//����������� i <= j��nums[i] <= nums[j]����ô���� nums �ǵ��������ġ� ����������� i <= j��nums[i] > = nums[j]����ô���� nums �ǵ����ݼ��ġ�
//
//������������ nums �ǵ�������ʱ���� true�����򷵻� false��
//
//
//
//ʾ�� 1��
//
//���룺nums = [1, 2, 2, 3]
//�����true
//ʾ�� 2��
//
//���룺nums = [6, 5, 4, 4]
//�����true
//ʾ�� 3��
//
//���룺nums = [1, 3, 2]
//�����false
//
//
//��ʾ��
//
//1 <= nums.length <= 105
//- 105 <= nums[i] <= 105
#include "LeetCode896.h"
bool Solution::isMonotonic(vector<int>& nums) {
	vector<int> v1, v2;
	v1 = nums;
	v2 = nums;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	reverse(v2.begin(), v2.end()); 
	if (nums == v1 || nums == v2)
	{
		return true;
	}
	return false;
};
//����һ�����α���
//�����������飬�ֱ��ж����Ƿ�Ϊ���������򵥵��ݼ���
//class Solution {
//public:
//	bool isMonotonic(vector<int>& nums) {
//		return is_sorted(nums.begin(), nums.end()) || is_sorted(nums.rbegin(), nums.rend());
//	}
//};
//���Ӷȷ���
//
//ʱ�临�Ӷȣ�O(n)O(n)O(n)������ nnn ������ nums\textit{ nums }nums �ĳ��ȡ�
//
//�ռ临�Ӷȣ�O(1)O(1)O(1)��
//
//��������һ�α���
//�������� nums\textit{ nums }nums������������ nums[i] > nums[i + 1]\textit{ nums }[i] > \textit{ nums }[i + 1]nums[i] > nums[i + 1] �������� nums[i��] < nums[i�� + 1]\textit{ nums }[i']<\textit{nums}[i' + 1]nums[i
//	��
//] < nums[i
//	��
//	+ 1]����˵�� nums\textit{ nums }nums �Ȳ��ǵ��������ģ�Ҳ���ǵ����ݼ��ġ�
//	class Solution {
//	public:
//		bool isMonotonic(vector<int>& nums) {
//			bool inc = true, dec = true;
//			int n = nums.size();
//			for (int i = 0; i < n - 1; ++i) {
//				if (nums[i] > nums[i + 1]) {
//					inc = false;
//				}
//				if (nums[i] < nums[i + 1]) {
//					dec = false;
//				}
//			}
//			return inc || dec;
//		}
//};
//���Ӷȷ���
//
//ʱ�临�Ӷȣ�O(n)O(n)O(n)������ nnn ������ nums\textit{ nums }nums �ĳ��ȡ�
//
//�ռ临�Ӷȣ�O(1)O(1)O(1)��
 
//867. ת�þ���
//����һ����ά�������� matrix�� ���� matrix �� ת�þ��� ��
//
//����� ת�� ��ָ����������Խ��߷�ת���������������������������
//
//
//
//
//
//ʾ�� 1��
//
//���룺matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
//����� [[1, 4, 7], [2, 5, 8], [3, 6, 9]]
//ʾ�� 2��
//
//���룺matrix = [[1, 2, 3], [4, 5, 6]]
//����� [[1, 4], [2, 5], [3, 6]]
//
//
//��ʾ��
//
//m == matrix.length
//n == matrix[i].length
//1 <= m, n <= 1000
//1 <= m * n <= 105
//- 109 <= matrix[i][j] <= 109
#include "LeetCode867.h"
vector<vector<int>> Solution::transpose(vector<vector<int>>& matrix) {
	int x = matrix.size();
	int y = matrix[0].size();
	vector<vector<int>> result(y, vector<int>(x, 0));
	for (size_t i = 0; i < matrix.size(); i++)
	{
		for (size_t j = 0; j < matrix[i].size(); j++)
		{
			result[j][i] = matrix[i][j];
		}
	}
	return result;
};
//����һ��ģ��
//������� matrix\textit{ matrix }matrix Ϊ mmm �� nnn �У���ת�ú�ľ��� matrixT\textit{ matrix }^ \text{ T }matrix
//T
//Ϊ nnn �� mmm �У��Ҷ����� 0��i < m0 \le i < m0��i < m �� 0��j < n0 \le j < n0��j < n������ matrixT[j][i] = matrix[i][j]\textit{ matrix } ^ \text{ T }[j][i] = \textit{ matrix }[i][j]matrix
//	T
//	[j][i] = matrix[i][j]��
//
//	����һ�� nnn �� mmm �е��¾��󣬸���ת�õĹ�����¾����е�ÿ��Ԫ�ظ�ֵ�����¾���Ϊת�ú�ľ���
//	class Solution {
//	public:
//		vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//			int m = matrix.size(), n = matrix[0].size();
//			vector<vector<int>> transposed(n, vector<int>(m));
//			for (int i = 0; i < m; i++) {
//				for (int j = 0; j < n; j++) {
//					transposed[j][i] = matrix[i][j];
//				}
//			}
//			return transposed;
//		}
//};
//���Ӷȷ���
//
//ʱ�临�Ӷȣ�O(mn)O(mn)O(mn)������ mmm �� nnn �ֱ��Ǿ��� matrix\textit{ matrix }matrix ����������������Ҫ�����������󣬲���ת�ú�ľ�����и�ֵ������
//
//�ռ临�Ӷȣ�O(1)O(1)O(1)�����˷���ֵ���⣬����ʹ�õĿռ�Ϊ������
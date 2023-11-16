//2586. ͳ�Ʒ�Χ�ڵ�Ԫ���ַ�����
//����һ���±�� 0 ��ʼ���ַ������� words ������������left �� right ��
//
//����ַ�����Ԫ����ĸ��ͷ����Ԫ����ĸ��β����ô���ַ�������һ�� Ԫ���ַ��� ������Ԫ����ĸ�� 'a'��'e'��'i'��'o'��'u' ��
//
//���� words[i] ��Ԫ���ַ�������Ŀ������ i �ڱ�����[left, right] �ڡ�
//
//
//
//ʾ�� 1��
//
//���룺words = ["are", "amy", "u"], left = 0, right = 2
//�����2
//���ͣ�
//- "are" ��һ��Ԫ���ַ�������Ϊ���� 'a' ��ͷ���� 'e' ��β��
//- "amy" ����Ԫ���ַ�������Ϊ��û����Ԫ����ĸ��β��
//- "u" ��һ��Ԫ���ַ�������Ϊ���� 'u' ��ͷ���� 'u' ��β��
//��������Χ�е�Ԫ���ַ�����ĿΪ 2 ��
//ʾ�� 2��
//
//���룺words = ["hey", "aeo", "mu", "ooo", "artro"], left = 1, right = 4
//�����3
//���ͣ�
//- "aeo" ��һ��Ԫ���ַ�������Ϊ���� 'a' ��ͷ���� 'o' ��β��
//- "mu" ����Ԫ���ַ�������Ϊ��û����Ԫ����ĸ��ͷ��
//- "ooo" ��һ��Ԫ���ַ�������Ϊ���� 'o' ��ͷ���� 'o' ��β��
//- "artro" ��һ��Ԫ���ַ�������Ϊ���� 'a' ��ͷ���� 'o' ��β��
//��������Χ�е�Ԫ���ַ�����ĿΪ 3 ��
//
//
//��ʾ��
//
//1 <= words.length <= 1000
//1 <= words[i].length <= 10
//words[i] ����СдӢ����ĸ���
//0 <= left <= right < words.length
#include"LeetCode2586.h"
int Solution::vowelStrings(vector<string>& words, int left, int right) {
	int result = 0;
	for (size_t i = left; i <= right; i++)
	{ 
		if (words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u')
		{
			if (words[i][words[i].size()-1] == 'a' || words[i][words[i].size() - 1] == 'e' || words[i][words[i].size() - 1] == 'i' || words[i][words[i].size() - 1] == 'o' || words[i][words[i].size() - 1] == 'u')
			{
				result++;
			}
		} 
	}
	return result;
};
//����һ��ö�ٷ�Χ�ڵ��ַ���
//˼·���㷨
//
//������[left, right][\textit{ left }, \textit{ right }][left, right] ��Χ��ö�ٸ����ַ������� words\textit{ words }words �е��ַ��������ж����Ƿ���Ԫ����ĸ��ͷ��������Ԫ����ĸ��β��
//
//Ϊ�˷����жϣ����ǿ��Խ�Ԫ����ĸ aeiou\text{ aeiou }aeiou ����һ����ϣ�����С�����һ��������ֻ��Ҫ�ж��ַ��������ַ���β�ַ��Ƿ���ڹ�ϣ�����г��ּ��ɡ�
//class Solution {
//public:
//	int vowelStrings(vector<string>& words, int left, int right) {
//		unordered_set<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
//		int ans = 0;
//		for (int i = left; i <= right; ++i) {
//			const string& word = words[i];
//			if (vowels.count(word[0]) && vowels.count(word.back())) {
//				++ans;
//			}
//		}
//		return ans;
//	}
//};
//���Ӷȷ���
//
//ʱ�临�Ӷȣ�O(n + �O���O)O(n + | \Sigma | )O(n + �O���O)������ nnn ������ words\textit{ words }words �ĳ��ȣ���\Sigma�� ��Ԫ���ļ��ϣ��ڱ����� �O���O = 5 | \Sigma | = 5�O���O = 5��
//
//�ռ临�Ӷȣ�O(�O���O)O(| \Sigma | )O(�O���O)����Ϊ��ϣ������Ҫʹ�õĿռ䡣
//1768. ����ϲ��ַ���
//���������ַ��� word1 �� word2 ������� word1 ��ʼ��ͨ�����������ĸ���ϲ��ַ��������һ���ַ�������һ���ַ��������ͽ����������ĸ׷�ӵ��ϲ����ַ�����ĩβ��
//
//���� �ϲ�����ַ��� ��
//
//
//
//ʾ�� 1��
//
//���룺word1 = "abc", word2 = "pqr"
//�����"apbqcr"
//���ͣ��ַ����ϲ����������ʾ��
//word1��  a   b   c
//word2��    p   q   r
//�ϲ���  a p b q c r
//ʾ�� 2��
//
//���룺word1 = "ab", word2 = "pqrs"
//�����"apbqrs"
//���ͣ�ע�⣬word2 �� word1 ����"rs" ��Ҫ׷�ӵ��ϲ����ַ�����ĩβ��
//word1��  a   b
//word2��    p   q   r   s
//�ϲ���  a p b q   r   s
//ʾ�� 3��
//
//���룺word1 = "abcd", word2 = "pq"
//�����"apbqcd"
//���ͣ�ע�⣬word1 �� word2 ����"cd" ��Ҫ׷�ӵ��ϲ����ַ�����ĩβ��
//word1��  a   b   c   d
//word2��    p   q
//�ϲ���  a p b q c   d
//
//
//��ʾ��
//
//1 <= word1.length, word2.length <= 100
//word1 �� word2 ��СдӢ����ĸ���


#include "LeetCode1768.h"

string Solution::mergeAlternately(string word1, string word2) {
	string result;
	while (word1.size() != 0)
	{
		result += word1[0];
		word1.erase(0, 1);
		if (word2.size() != 0)
		{
			result += word2[0];
			word2.erase(0, 1);
		}
	}
	if (word2.size() != 0)
	{
		result += word2;
	}
	return result;
};
//string Solution::mergeAlternately(string word1, string word2) {
//    int m = word1.size(), n = word2.size();
//    int i = 0, j = 0;
//
//    string ans;
//    ans.reserve(m + n);
//    while (i < m || j < n) {
//        if (i < m) {
//            ans.push_back(word1[i]);
//            ++i;
//        }
//        if (j < n) {
//            ans.push_back(word2[j]);
//            ++j;
//        }
//    }
//    return ans;
//}
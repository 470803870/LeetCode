//389. �Ҳ�ͬ
//���������ַ��� s �� t ������ֻ����Сд��ĸ��
//
//�ַ��� t ���ַ��� s ������ţ�Ȼ�������λ�����һ����ĸ��
//
//���ҳ��� t �б���ӵ���ĸ��
//
//
//
//ʾ�� 1��
//
//���룺s = "abcd", t = "abcde"
//�����"e"
//���ͣ�'e' ���Ǹ�����ӵ���ĸ��
//ʾ�� 2��
//
//���룺s = "", t = "y"
//�����"y"
//
//
//��ʾ��
//
//0 <= s.length <= 1000
//t.length == s.length + 1
//s �� t ֻ����Сд��ĸ

#include "LeetCode389.h"

char Solution::findTheDifference(string s, string t) {

	int map[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	for (size_t i = 0; i < s.size(); i++)
	{
		map[s[i] - 65]++;
	}
	for (size_t i = 0; i < t.size(); i++)
	{
		map[t[i] - 65]--;
	}
	for (size_t i = 0; i < 26; i++)
	{
		if (map[i] == -1) {
			return i + 65;
		}
	}
};
//char Solution::findTheDifference(string s, string t) {
//	int as = 0, at = 0;
//	for (char ch : s) {
//		as += ch;
//	}
//	for (char ch : t) {
//		at += ch;
//	}
//	return at - as;
//};
//
//char  Solution::findTheDifference(string s, string t) {
//	int ret = 0;
//	for (char ch : s) {
//		ret ^= ch;
//	}
//	for (char ch : t) {
//		ret ^= ch;
//	}
//	return ret;
//};
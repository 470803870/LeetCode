//709. ת����Сд��ĸ
//����һ���ַ��� s �������ַ����еĴ�д��ĸת������ͬ��Сд��ĸ�������µ��ַ�����
//
//
//
//ʾ�� 1��
//
//���룺s = "Hello"
//�����"hello"
//ʾ�� 2��
//
//���룺s = "here"
//�����"here"
//ʾ�� 3��
//
//���룺s = "LOVELY"
//�����"lovely"
//
//
//��ʾ��
//
//1 <= s.length <= 100
//s �� ASCII �ַ����еĿɴ�ӡ�ַ����

#include "LeetCode709.h"
string Solution::toLowerCase(string s) {
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
	return s;
};
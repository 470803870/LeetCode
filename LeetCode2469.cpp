//2469. �¶�ת��
//����һ���������뵽��λС���ķǸ������� celsius ����ʾ�¶ȣ��� ���϶ȣ�Celsius��Ϊ��λ��
//
//����Ҫ�����϶�ת��Ϊ ���϶ȣ�Kelvin���� ���϶ȣ�Fahrenheit������������ ans = [kelvin, fahrenheit] ����ʽ���ؽ����
//
//�������� ans ����ʵ�ʴ������� 10 - 5 �Ļ���Ϊ��ȷ�𰸡�
//
//ע�⣺
//
//���϶� = ���϶� + 273.15
//���϶� = ���϶� * 1.80 + 32.00
//
//
//ʾ�� 1 ��
//
//���룺celsius = 36.50
//�����[309.65000, 97.70000]
//���ͣ�36.50 ���϶ȣ�ת��Ϊ���϶��� 309.65 ��ת��Ϊ���϶��� 97.70 ��
//ʾ�� 2 ��
//
//���룺celsius = 122.11
//�����[395.26000, 251.79800]
//���ͣ�122.11 ���϶ȣ�ת��Ϊ���϶��� 395.26 ��ת��Ϊ���϶��� 251.798 ��
//
//
//��ʾ��
//
//0 <= celsius <= 1000
#include "LeetCode2469.h"
vector<double> Solution::convertTemperature(double celsius) {
	vector<double> result;
	result.push_back(celsius + 273.15);
	result.push_back(celsius * 1.8 + 32);
	return result;
};
//����һ��ģ��
//˼·���㷨
//
//��ĿҪ�󽫸������϶� celsius\textit{ celsius }celsius ת��Ϊ���϶Ⱥͻ��϶ȣ����Ǹ�����Ŀ�����ļ��㹫ʽֱ�Ӽ��㼴�ɣ����м��㹫ʽ���� :
//
//���϶ȣ�Kelvin = Celsius + 237.15\text{ Kelvin } = \text{ Celsius } + 237.15Kelvin = Celsius + 237.15��
//���϶ȣ�Fahrenheit = Celsius��1.80 + 32.00\text{ Fahrenheit } = \text{ Celsius } \times 1.80 + 32.00Fahrenheit = Celsius��1.80 + 32.00��
//class Solution {
//public:
//	vector<double> convertTemperature(double celsius) {
//		return { celsius + 273.15, celsius * 1.80 + 32.00 };
//	}
//};
//���Ӷȷ���
//
//ʱ�临�Ӷȣ�O(1)O(1)O(1)��
//
//�ռ临�Ӷȣ�O(1)O(1)O(1)��
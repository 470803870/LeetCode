//2236. �жϸ�����Ƿ�����ӽ��֮��
//����һ�� ������ �ĸ���� root���ö�������ǡ�� 3 �������ɣ�����㡢���ӽ������ӽ�㡣
//
//��������ֵ���������ӽ��ֵ֮�ͣ����� true �����򷵻� false ��
//
//
//
//ʾ�� 1��
//
//
//���룺root = [10, 4, 6]
//�����true
//���ͣ�����㡢���ӽ������ӽ���ֵ�ֱ��� 10 ��4 �� 6 ��
//���� 10 ���� 4 + 6 ����˷��� true ��
//ʾ�� 2��
//
//
//���룺root = [5, 3, 1]
//�����false
//���ͣ�����㡢���ӽ������ӽ���ֵ�ֱ��� 5 ��3 �� 1 ��
//���� 5 ������ 3 + 1 ����˷��� false ��
//
//
//��ʾ��
//
//��ֻ��������㡢���ӽ������ӽ��
//- 100 <= Node.val <= 100
#include "LeetCode2236.h"
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
bool Solution::checkTree(TreeNode* root) {
	return root->val == root->left->val + root->right->val; 
};
//����һ��ֱ���ж�
//���������ӽ��ֵ֮�ͣ��ж��Ƿ���ڸ����ֵ���ɡ�
//class Solution {
//public:
//    bool checkTree(TreeNode* root) {
//        return root->val == root->left->val + root->right->val;
//    }
//};
//���Ӷȷ���
//
//ʱ�临�Ӷȣ�O(1)O(1)O(1)��
//
//�ռ临�Ӷȣ�O(1)O(1)O(1)��
﻿//852. 山脉数组的峰顶索引
//符合下列属性的数组 arr 称为 山脉数组 ：
//arr.length >= 3
//存在 i（0 < i < arr.length - 1）使得：
//	arr[0] < arr[1] < ... arr[i - 1] < arr[i]
//	arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
//	给你由整数组成的山脉数组 arr ，返回满足 arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] 的下标 i 。
//
//	你必须设计并实现时间复杂度为 O(log(n)) 的解决方案。
//
//
//
//	示例 1：
//
//	输入：arr = [0, 1, 0]
//	输出：1
//	示例 2：
//
//	输入：arr = [0, 2, 1, 0]
//	输出：1
//	示例 3：
//
//	输入：arr = [0, 10, 5, 2]
//	输出：1
//
//
//	提示：
//
//	3 <= arr.length <= 105
//	0 <= arr[i] <= 106
//	题目数据保证 arr 是一个山脉数组
#include "LeetCode852.h"
int Solution::peakIndexInMountainArray(vector<int>& arr) {
	int left = 0, right = arr.size() - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (mid == 0)
		{
			mid = 1;
		}
		if (mid == arr.size()-1)
		{
			mid = arr.size() - 2;
		}
		if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
		{
			return mid;
		}
		else if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1])
		{
			left = mid + 1;
		}
		else if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1])
		{
			right = mid - 1;
		}
	}
	return mid;
}; 
//前言
//虽然题目描述中说明了「我们可以返回任何满足条件的下标 iii」，但由于条件为：
//
//arr0<arr1<⋯arri−1<arri>arri + 1>⋯>arrn−1\textit{ arr }_0 < \textit{ arr }_1 < \cdots \textit{ arr }_{ i - 1 } < \textit{ arr }_i > \textit{ arr }_{ i + 1 } > \cdots > \textit{ arr }_{ n - 1 }
//arr
//0
//​
//<arr
//	1
//	​
//	<⋯arr
//	i−1
//	​
//	<arr
//	i
//	​
//	>arr
//	i + 1
//	​
//	>⋯>arr
//	n−1
//	​
//
//	其中 nnn 是数组 arr\textit{ arr }arr 的长度，这说明 arri\textit{ arr }_iarr
//	i
//	​
//	是数组中的最大值，并且是唯一的最大值。
//
//	因此，我们需要找出的下标 iii 一定是唯一的。
//
//	方法一：枚举
//	思路与算法
//
//	我们可以对数组 arr\textit{ arr }arr 进行一次遍历。
//
//	当我们遍历到下标 iii 时，如果有 arri−1<arri>arri + 1\textit{ arr }_{ i - 1 } < \textit{ arr }_i > \textit{ arr }_{ i + 1 }arr
//	i−1
//	​
//	<arr
//	i
//	​
//	>arr
//	i + 1
//	​
//	，那么 iii 就是我们需要找出的下标。
//
//	更简单地，我们只需要让 iii 满足 arri > arri + 1\textit{ arr }_i > \textit{ arr }_{ i + 1 }arr
//	i
//	​
// > arr
//	i + 1
//	​
//	即可。在遍历的过程中，我们最先遍历到的满足 arri > arri + 1\textit{ arr }_i > \textit{ arr }_{ i + 1 }arr
//	i
//	​
// > arr
//	i + 1
//	​
//	的下标 iii 一定也满足 arri−1 < arri\textit{ arr }_{ i - 1 } < \textit{ arr }_iarr
//	i−1
//	​
//	< arr
//	i
//	​
//	。
//class Solution {
//public:
//	int peakIndexInMountainArray(vector<int>& arr) {
//		int n = arr.size();
//		int ans = -1;
//		for (int i = 1; i < n - 1; ++i) {
//			if (arr[i] > arr[i + 1]) {
//				ans = i;
//				break;
//			}
//		}
//		return ans;
//	}
//};
//复杂度分析
//
//时间复杂度：O(n)O(n)O(n)，其中 nnn 是数组 arr\textit{ arr }arr 的长度。我们最多需要对数组 arr\textit{ arr }arr 进行一次遍历。
//
//空间复杂度：O(1)O(1)O(1)。
//
//方法二：二分查找
//思路与算法
//
//记满足题目要求的下标 iii 为 iansi_\textit{ ans }i
//ans
//​
//。我们可以发现：
//
//当 i < iansi < i_\textit{ ans }i < i
//	ans
//	​
//	时，arri < arri + 1\textit{ arr }_i < \textit{ arr }_{ i + 1 }arr
//	i
//	​
//	< arr
//	i + 1
//	​
//	恒成立；
//
//	当 i≥iansi \geq i_\textit{ ans }i≥i
//	ans
//	​
//	时，arri > arri + 1\textit{ arr }_i > \textit{ arr }_{ i + 1 }arr
//	i
//	​
//	> arr
//	i + 1
//	​
//	恒成立。
//
//	这与方法一的遍历过程也是一致的，因此 iansi_\textit{ ans }i
//	ans
//	​
//	即为「最小的满足 arri > arri + 1\textit{ arr }_i > \textit{ arr }_{ i + 1 }arr
//	i
//	​
//> arr
//i + 1
//​
//的下标 iii」，我们可以用二分查找的方法来找出 iansi_\textit{ ans }i
//ans
//​
//。
//class Solution {
//public:
//	int peakIndexInMountainArray(vector<int>& arr) {
//		int n = arr.size();
//		int left = 1, right = n - 2, ans = 0;
//		while (left <= right) {
//			int mid = (left + right) / 2;
//			if (arr[mid] > arr[mid + 1]) {
//				ans = mid;
//				right = mid - 1;
//			}
//			else {
//				left = mid + 1;
//			}
//		}
//		return ans;
//	}
//};
//复杂度分析
//
//时间复杂度：O(log⁡n)O(\log n)O(logn)，其中 nnn 是数组 arr\textit{ arr }arr 的长度。我们需要进行二分查找的次数为 O(log⁡n)O(\log n)O(logn)。
//
//空间复杂度：O(1)O(1)O(1)。
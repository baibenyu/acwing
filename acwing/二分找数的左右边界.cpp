//
///*
//步骤:
//1.找一个数的起始点和终止点实际上就是在找数组中大于等于它的最小值,以及大于它的最小值
//  正好对应二分查找的两种写法
//2.二分查找的写法:
//	2-1.mid = (l+r)>>1,寻找的范围在[l,r),找大于等于数的最小值
//	2-2.mid = (l+r+1)>>1,寻找的范围在(l,r],找大于数的最小值
//*/
//
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 1;
//
//int n, q, target;
//int nums[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> q;
//	for (int i = 0; i < n; i++) cin >> nums[i];
//
//	int l, r;
//	for (int i = 0; i < q; i++)
//	{
//		cin >> target;
//		l = 0, r = n - 1;
//		while (l < r)
//		{
//			int mid = (l + r) >> 1;
//			if (nums[mid] >= target) r = mid;
//			else l = mid + 1;
//		}
//		if (nums[l] != target)
//		{
//			cout << "-1 -1" << '\n';
//			continue;
//		}
//		int start = l;
//		r = n - 1; // 只更新r的值,因为l必然小于等于r
//		while (l < r)
//		{
//			int mid = (l + r + 1) >> 1;
//			if (nums[mid] <= target) l = mid;
//			else r = mid - 1;
//		}
//		int end = r;
//		cout << start << ' ' << end << '\n';
//	}
//	return 0;
//}
//
//

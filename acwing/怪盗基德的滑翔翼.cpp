///*
//与最长上升子序列的区别:
//因为可以选择下落的方向(左,右),所以需要从左往右求一遍最大,再从右往左求一遍最大
//步骤:
//	1.状态的表示:f(i)表示以a[i]结尾的所有上升子序列中长度最大值
//	2.状态的划分:从1-i-1为子序列的前一个元素,划分为i-1种情况,
//				特别的,若前一个元素大于a[i]显然不合法.
//				最长上升子序列最少为1,即a[i]本身
//	3.状态的计算:从所有合法状态中取最大值即可
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//typedef long long LL;
//typedef pair<int, int> PII;
//typedef unsigned long long ULL;
//
//const int N = 101;
//
//int k,n;
//int a[N], f[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> k;
//	while (k--)
//	{
//		cin >> n;
//		for (int i = 1; i <= n; i++) cin >> a[i];
//		int res = 0;
//
//		for (int i = 1; i <= n; i++)
//		{
//			f[i] = 1;
//			for (int j = 1; j < i; j++)
//			{
//				if (a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
//			}
//			res = max(res, f[i]);
//		}
//
//		for (int i = n; i >= 1; i--)
//		{
//			f[i] = 1;
//			for (int j = n; j > i; j--)
//			{
//				if (a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
//			}
//			res = max(res, f[i]);
//		}
//
//		cout << res<<'\n';
//	}
//
//	return 0;
//}
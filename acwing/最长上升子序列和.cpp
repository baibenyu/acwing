///*
//步骤:
//	1.状态的表示:f[i]表示以第i个数为结尾的所有上升子序列的和的最大值
//	2.状态的分割:可以分成有前驱和无前驱
//				(1)无前驱,即值为a[i],前面的所有数都比当前数大
//				(2)有前驱,那么序列就是以j为结尾,且aj<ai的序列中的最长序列再+a[i]
//	3.状态的转移:取分割状态的最大值即可
//				
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e3 + 1;
//
//int n;
//int f[N], a[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = a[i];
//		for (int j = 1; j < i; j++) if (a[j] < a[i]) f[i] = max(f[i], f[j] + a[i]);
//		res = max(res, f[i]);
//	}
//
//	cout << res << '\n';
//	return 0;
//}
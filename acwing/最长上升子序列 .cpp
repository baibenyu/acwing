///*
//步骤:
//	1.状态的表示:f[i]表示以第i个数为结尾的所有上升子序列的最大值
//	2.状态的分割:可以分成有前驱和无前驱
//				(1)无前驱,即序列长度为1,前面的所有数都比当前数大
//				(2)有前驱,那么序列长度就是以j为结尾,且aj<ai的序列中的最长序列再+1
//	3.状态的转移:遍历上述前驱数,取最大值即可
//				即 for (int j=1;j<i;j++) if (aj<ai) f(i) = max(f(i),f(j)+1)
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
//		f[i] = 1;
//		for (int j = 1; j < i; j++) if (a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
//		res = max(f[i], res);
//	}
//
//	cout << res << '\n';
//	return 0;
//}
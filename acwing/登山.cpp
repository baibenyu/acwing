///*
//步骤:
//	1.海拔不同->严格递增或递减
//	2.顺序浏览->从左往右
//	3.一旦下山,不再上山->找一个最长先上升后下降的最长子序列,下降可以视为上升的逆向
//	即找到从左往右以a[i]为最长上升子序列,再从右往左以a[i]为最长上升子序列.
//	因为a[i]会被计算两次,所以要减一
//
//*/
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
//const int N = 1001;
//
//int n;
//int a[N], f[N], g[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	int res = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = 1;
//		for (int j = 1; j < i; j++)
//		{
//			if (a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
//		}
//	}
//
//	for (int i = n; i >= 1; i--)
//	{
//		g[i] = 1;
//		for (int j = n; j > i; j--)
//		{
//			if (a[j] < a[i]) g[i] = max(g[i], g[j] + 1);
//		}
//	}
//
//	for (int i = 1; i <= n; i++) res = max(res, f[i] + g[i] - 1);
//	cout << res << '\n';
//
//	return 0;
//}
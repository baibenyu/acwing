///*
//步骤:
//	1.第一问显然是一个最长下降子序列问题
//	2.第二问采用贪心的思路,每次遇到新数让它接在大于等于它本身的最小值的序列后面
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
//const int N = 1e5 + 1;
//
//int n, cnt;
//int m[N], f[N], g[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	while (cin >> m[n]) n += 1;
//
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		f[i] = 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (m[j] >= m[i]) f[i] = max(f[i], f[j] + 1);
//		}
//		res = max(res, f[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		int mint = 0, k = 0;
//		while (k < cnt and g[k] < m[i]) k += 1;
//		g[k] = m[i];
//		if (k == cnt) cnt += 1;
//	}
//
//	cout << res << '\n';
//	cout << cnt << '\n';
//
//	return 0;
//}
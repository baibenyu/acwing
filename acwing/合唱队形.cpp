///*
//步骤:
//	1.是登山问题的对偶问题,最少去掉几个->最多剩下几个
//	所以在登山问题的基础上,用总长度-最长子序列长度即为答案
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
//const int N = 101;
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
//
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = 1;
//		for (int j = 1; j < i; j++)
//		{
//			if (a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
//		}
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		g[i] = 1;
//		for (int j = n; j > i; j--)
//		{
//			if (a[j] < a[i]) g[i] = max(g[i], g[j] + 1);
//		}
//	}
//
//	int res = 0;
//	for (int i = 1; i <= n; i++) res = max(res, f[i] + g[i] - 1);
//	cout << n-res << '\n';
//
//	return 0;
//}
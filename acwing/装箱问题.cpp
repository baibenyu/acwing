///*
//步骤:
//	1.因为数据<=30,所以用了爆搜
//	2.本题是01背包的变种,将剩余体积最小->使用体积最大
//	3.将体积同时视为体积以及价值
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
//const int N = 1e3 + 1, V = 2e4 + 1;
//
//int v, n, ans;
//int w[N];
//
//void dfs(int k, int r)
//{
//	if (r < 0) return;
//	if (k == n)
//	{
//		ans = min(ans, r);
//		return;
//	}
//
//	dfs(k + 1, r);
//
//	dfs(k + 1, r - w[k]);
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> v >> n;
//	for (int i = 0; i < n; i++) cin >> w[i];
//	ans = v;
//	dfs(0, v);
//
//	cout << ans;
//	return 0;
//}
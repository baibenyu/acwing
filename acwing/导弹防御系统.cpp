///*
//步骤:
//	1.本题数据范围较小,考虑暴搜回溯
//	2.严格上升或下降,说明最长上升或下降子序列
//	3.up[k]表示第k套上升防御系统的末尾值是多少
//	  down[k]表示第k套下降防御系统的末尾值是多少
//	4.贪心,上升时接在小于自身的最大值后面.
//		   下降时接在大于自身的最小值后面
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
//const int N = 51;
//
//int n, ans;
//int m[N], up[N], down[N];
//
//void dfs(int cur, int u, int v)
//{
//	if (u + v >= ans) return;
//	if (cur == n)
//	{
//		ans = min(ans, u + v);
//		return;
//	}
//
//	int k = 0;
//	while (k < u and up[k] >= m[cur]) k += 1;
//	int t = up[k];
//	up[k] = m[cur];
//	if (k == u) dfs(cur + 1, u + 1, v);
//	else dfs(cur + 1, u, v);
//	up[k] = t;
//
//	k = 0;
//	while (k < v and down[k] <= m[cur]) k += 1;
//	t = down[k];
//	down[k] = m[cur];
//	if (k == v) dfs(cur + 1, u, v + 1);
//	else dfs(cur + 1, u, v);
//	down[k] = t;
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	while (cin >> n, n)
//	{
//		for (int i = 0; i < n; i++) cin >> m[i];
//		ans = n;
//
//		dfs(0, 0, 0);
//		cout << ans << '\n';
//	}
//
//	return 0;
//}
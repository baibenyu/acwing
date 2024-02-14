///*
//二分图定理:当且仅当图中不含奇数环
//时间复杂度:O(n+m)
//步骤:
//	1.稀疏图用邻接表
//	2.用dfs尝试染色
//		2-1.第一步将u结点染为c色
//		2-2.遍历当前结点的所有出边的结点,
//		2-3.将尚未染色的染色,若染色矛盾返回false
//		2-4.若已染色则判断是否与当前结点同色,同色显然矛盾,返回false
//	3.要尝试对每一个结点所对应的连通块都进行染色,因为一个二分图中不一定只有一个连通块
//	  dfs只能完成一个连通块的染色
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1e5 + 1,M = 2e5+1;
//
//int n,m,cur;
//int h[N], nx[M], v[M], color[N];
//
//void add(int a, int b)
//{
//	v[cur] = b, nx[cur] = h[a], h[a] = cur++;
//}
//
//bool dfs(int u, int c)
//{
//	color[u] = c;
//
//	for (int i = h[u]; i != -1; i = nx[i])
//	{
//		int j = v[i];
//		if (!color[j])
//		{
//			if (!dfs(j, 3 - c)) return false;
//		}
//		// 不能直接返回 color[j]!=c,因为即使不同也只能说明这个点染色成功,但不代表整个图都成功了
//		else if (color[j] == c) return false; 
//	}
//	return true;
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m;
//	int u, v;
//	memset(h, -1, sizeof(h));
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v;
//		add(u, v), add(v, u);
//	}
//
//	bool flag = true;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!color[i])
//		{
//			if (!dfs(i,1)) flag = false;
//		}
//	}
//
//	if (flag) cout << "Yes";
//	else cout << "No";
//
//	return 0;
//}
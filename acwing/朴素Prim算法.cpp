///*
//Prim算法与Dijkstra算法的区别:一个是到集合,一个到起点
//时间复杂度:O(n^2)
//步骤:
//	1.初始化起点到各点的距离为正无穷,到自己距离为0
//	2.遍历尚未确定的点,找到离集合最近的点,将该点标记为已确定
//		2-1.因为是集合,所以在集合有第一个点之前,集合为空,所以第一个点到空集合的距离为无穷
//		2-2.如果集合非空,那么如果当前dist[t]到集合距离为无穷说明连通块不止一个,即不可能有最小生成树
//		2-3.如果不是无穷,那么累加到最小生成树的权重里
//	3.用找到的点更新其它点到集合的距离
//*/
//
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 501,INF = 0x3f3f3f3f;
//
//int n, m;
//int dist[N],W[N][N];
//bool flag[N];
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m;
//
//	memset(W, 0x3f, sizeof(W));
//	int u, v, w;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v >> w;
//		W[u][v] = W[v][u] = min(W[u][v], w); // 处理重边
//	}
//
//	memset(dist, 0x3f, sizeof(dist)); // 因为第一个点到空集的距离就是无穷,所以不像其它算法要初始化为0
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//		{
//			if (!flag[j] and (t == -1 or dist[j] < dist[t])) t = j;
//		}
//
//		flag[t] = true;
//
//		if (i)
//		{
//			if (dist[t] == INF)
//			{
//				cout << "impossible";
//				return 0;
//			}
//			else res += dist[t];
//		}
//
//		for (int j = 1; j <= n; j++) dist[j] = min(dist[j], W[t][j]);
//	}
//	cout << res << '\n';
//	return 0;
//}
///*
//kruskal算法常用于稀疏图
//定理:最小生成树的n-1条边,就是所有连接不同的两点中最小的n-1条
//时间复杂度:O(mlogm)
//步骤:
//	1.将所有边按权重升序排序(sort)
//	2.枚举每条边的a,b,权重w
//	  如果a,b不联通(并查集),那么连通ab点,将该边加入集合
//	  如果已连通,说明有更短的边已经连上了a和b,当前边是无用的
//	3.cnt是为了判断是否是连通图,有可能不止一个连通块
//	
//*/
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1e5 + 1, M = 2e5 + 1;
//
//class Edge
//{
//public:
//	int u, v, w;
//
//	bool operator <(const Edge& t)const
//	{
//		return this->w < t.w;
//	}
//}edge[M];
//
//int n, m;
//int p[N];
//
//int find(int x)
//{
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) p[i] = i;
//	for (int i = 1; i <= m; i++) cin >> edge[i].u >> edge[i].v >> edge[i].w;
//	sort(edge, edge + m);
//
//	int res = 0, cnt = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		int u = edge[i].u, v = edge[i].v, w = edge[i].w;
//		int pu = find(u), pv = find(v);
//		if (pu != pv)
//		{
//			p[pu] = pv;
//			res += w;
//			cnt += 1;
//		}
//	}
//
//	if (cnt < n - 1) cout << "impossible";
//	else cout << res;
//
//	return 0;
//}
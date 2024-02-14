///*
//Bellman-Ford算法的真实含义是最多经过k条边到达某个点所需的最小距离
//时间复杂度:O(nm)
//步骤:
//	1.用结构体存储边,边的属性包含a(起点),b(终点),w(边的权重)
//	2.初始化到所有点的距离为无穷,到自身距离为0
//	3.遍历k次,每次更新距离时应采用上一轮的更新结果,而不是实时更新
//		3-1.遍历所有边,更新结点对应的最小值
//	4.计算机中的无穷大,并不是逻辑上的无穷,而是取了一个通常情况下非常大的数字,
//	  这个数是可能会被同量级的数更新的,即虽然仍然非常大,但这个无穷数改变了,所以只要数量级没有变化
//	  仍然视为无穷大,即比较的对象不是0x3f3f3f3f,而是0x3f3f3f3f/2
//*/
//
//
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 501,M = 1e4+1;
//
//int n, m, k;
//int dist[N], backup[N];
//
//class Edge
//{
//public:
//	int a, b, w;
//}edge[M];
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; i++) cin >> edge[i].a >> edge[i].b >> edge[i].w;
//
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	
//	for (int i = 0; i < k; i++)
//	{
//		memcpy(backup, dist, sizeof(dist));
//		for (int j = 1; j <= m;j++) // 边
//		{
//			int a = edge[j].a, b = edge[j].b, w = edge[j].w;
//			dist[b] = min(dist[b], backup[a] + w);
//		}
//	}
//
//	if (dist[n] > 0x3f3f3f3f / 2) cout << "impossible";
//	else cout << dist[n];
//
//	return 0;
//}
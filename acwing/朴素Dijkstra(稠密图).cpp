///*
//图的存储结构选择:
//	1.稠密图用邻接矩阵(m = n^2)
//	2.稀疏图用邻接表(m = n)
//时间复杂度:O(n^2)
//步骤:
//	1.初始化起点到各点的距离为正无穷,到自己距离为0
//	2.遍历尚未确定的点,找到离起点最近的点,将该点标记为已确定
//	3.用找到的点更新其它点到起点的距离
//*/
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 501;
//
//int n, m;
//int dist[N],weight[N][N],flag[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n >> m;
//	int x, y, z;
//	
//	memset(weight, 0x3f, sizeof(weight));
//	for (int i = 0; i < m; i++)
//	{
//		cin >> x >> y >> z;
//		weight[x][y] = min(weight[x][y], z); // 处理重边,只取最小边
//	}
//
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//		{
//			if (!flag[j] and (t == -1 or dist[t] > dist[j])) t = j;
//		}
//
//		flag[t] = true;
//
//		for (int j = 1; j <= n; j++) dist[j] = min(dist[j],dist[t]+weight[t][j]);
//	}
//
//	if (dist[n] == 0x3f3f3f3f) cout << "-1";
//	else cout << dist[n];
//	return 0;
//}
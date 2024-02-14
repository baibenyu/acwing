///*
//floyd算法:无法处理负环
//时间复杂度:O(n^3)
//步骤:
//	1.稠密图采用邻接矩阵
//	2.初始化矩阵,到自己距离为0,到其它点距离为无穷
//	3.重边取较小的边
//	4.处理无穷值仅判断数量级而不是是否相同
//	5.三重循环,dp
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 201, INF = 0x3f3f3f3f;
//
//int n, m, k;
//int w[N][N];
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m >> k;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j) w[i][j] = 0; // 初始化到自己距离为0,是为了排除自环的影响
//			else w[i][j] = INF;
//		}
//	}
//
//	int x, y, z;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> x >> y >> z;
//		w[x][y] = min(w[x][y], z);
//	}
//
//	for (int k = 1; k <= n; k++)
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				w[i][j] = min(w[i][j], w[i][k] + w[k][j]);
//
//	for (int i = 0; i < k; i++)
//	{
//		cin >> x >> y;
//		if (w[x][y] > INF / 2) cout << "impossible\n";
//		else cout << w[x][y] << '\n';
//	}
//
//	return 0;
//}
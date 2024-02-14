///*
//前期准备:
//i用二进制表示每个点是否已经被访问过
//步骤:
//	1.状态的表示:f(i,j)表示从0到j点,所有点是否被经过的状态是i的所有路径中的最小值
//	2.状态的分割:枚举不同的j之前那个经过的点
//	3.状态的计算:取所有状态的最小值即可
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
//const int N = 20,M = 1<<20+1;
//
//int n;
//int w[N][N], f[M][N];
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> w[i][j] >> w[j][i];
//
//	memset(f, 0x3f, sizeof(f));
//	f[1][0] = 0;
//	for (int i = 0; i < 1 << n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i >> j & 1)
//			{
//				for (int k = 0; k < n; k++)
//				{
//					if ((i - (1 << j)) >> k & 1)
//					{
//						f[i][j] = min(f[i][j], f[i - (1 << j)][k] + w[k][j]);
//					}
//				}
//			}
//		}
//	}
//
//	cout << f[(1 << n) - 1][n - 1];
//	return 0;
//}
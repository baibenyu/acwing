﻿///*
//分组背包:N组物品,每组物品里有若干种物品且一组物品中最多只能选一件物品,背包体积V,物品体积为Vij(i是组号,j是组内编号),价值为Wij.
//步骤:
//	1.状态的表示:用f(i,j)表示前i组物品中,体积选取不超过j的所有选法中的最大价值数
//	2.状态的分割:选法分成选取第i组物品中的哪一个或者不选取第i组物品
//		(1)不选取第i个物品,那么最大值就是显然从前i-1个物品中,体积选取不超过j的所有选法中的最大价值数,即f(i-1,j)
//		(2)选取第i组中第k个物品,那么我们只需要知道前i-1个物品中(因为我们已经确定要选取第i个物品了,即前i个,可以变成前i-1个),
//		   体积选取不超过j-vik(因为要选取第k个物品,那么倒推回去,前i-1个物品中选取的体积必须小于等于j-vik,否则不满足条件)的所有选法中的最大价值数,即f(i-1,j-vik)
//	3.状态的转移:以上状态的分割包含了所有的选法,所以我们只需要在遍历所有选法取价值的最大数即可
//	  for (int k=0;k<=si;k++)
//		f(i,j) = max(f(i,j),f(i-1,j-vik)+wik)
//	4.优化:同01背包进行f数组的一维化
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//
//const int N = 1e2 + 1;
//
//int n, v;
//int V[N][N], W[N][N], f[N], S[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n >> v;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> S[i];
//		for (int j = 1; j <= S[i]; j++) cin >> V[i][j] >> W[i][j];
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = v; j >= 1; j--) // 一维化
//		{
//			for (int k = 1; k <= S[i]; k++)
//			{
//				if (j >= V[i][k]) f[j] = max(f[j], f[j - V[i][k]] + W[i][k]);
//			}
//		}
//	}
//
//	cout << f[v] << '\n';
//	return 0;
//}
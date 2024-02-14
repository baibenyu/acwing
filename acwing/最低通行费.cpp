///*
//与摘花生区别在于,题目将"只能向下向右走"这个条件等价转换成"走过的方块数量的不能超过2n−1个"
//以及求最大值改为求最小值
//步骤:
//	1.状态的表示:f(i,j)表示到达(i,j)点的所有路径中取得的最小值
//	2.状态的划分:(1)从上往下走到达(i,j)点的子路径
//				(2)从左往右走到达(i,j)点的子路径
//	3.状态的计算:f(i,j)的值就是所有子路径的中的最小值+当前点的值
//				f(i,j) = min(f(i-1,j),f(i,j-1))+w(i,j);
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
//const int N = 110;
//
//int n;
//int matrix[N][N];
//int dp[N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) cin >> matrix[i][j];
//
//	memset(dp, 0x3f, sizeof(dp));
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == 1 and j == 1) dp[i][j] = matrix[i][j];
//			else if (i == 1) dp[i][j] = dp[i][j - 1] + matrix[i][j];
//			else if (j == 1) dp[i][j] = dp[i-1][j] + matrix[i][j];
//			else dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + matrix[i][j];
//		}
//	}
//	cout << dp[n][n]<<'\n';
//	
//	return 0;
//}
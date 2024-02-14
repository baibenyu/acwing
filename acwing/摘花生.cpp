///*
//步骤:
//	1.状态的表示:f(i,j)表示到达(i,j)点的所有路径中取得的最大值
//	2.状态的划分:(1)从上往下走到达(i,j)点的子路径
//				(2)从左往右走到达(i,j)点的子路径
//	3.状态的计算:f(i,j)的值就是所有子路径的中的最大值+当前点的值
//				f(i,j) = max(f(i-1,j),f(i,j-1))+w(i,j);
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//typedef pair<int, int> PII;
//typedef long long LL;
//typedef unsigned long long ULL;
//
//const int N = 110;
//
//int t,r,c;
//int matrix[N][N];
//int dp[N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> t;
//	while (t--)
//	{
//		cin >> r >> c;
//		for (int i = 1; i <= r; i++) for (int j = 1; j <= c; j++) cin >> matrix[i][j];
//		for (int i = 1; i <= r; i++)
//		{
//			for (int j = 1; j <= c; j++)
//			{
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + matrix[i][j];
//			}
//		}
//		cout << dp[r][c]<<'\n';
//	}
//	
//	return 0;
//}
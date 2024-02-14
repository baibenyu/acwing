///*
//步骤:
//	1.有两个背包,所以是三重循环
//	2.因为比卡丘的血量不能为0,所以血量背包等于血上限-1
//	3.找到花费最少血量,就从花费血量往回遍历,直至捕捉到的小精灵数量下降
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
//const int N = 1e3 + 1, M = 501, K = 101;
//
//int n, m, k;
//int c[N], d[N];
//int dp[N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m >> k;
//	for (int i = 1; i <= k; i++) cin >> c[i] >> d[i];
//
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = n; j >= c[i]; j--)
//		{
//			for (int z = m - 1; z >= d[i]; z--)
//			{
//				dp[j][z] = max(dp[j][z], dp[j - c[i]][z - d[i]] + 1);
//			}
//		}
//	}
//
//	cout << dp[n][m - 1] << '\n';
//	int t = m - 1;
//	while (t > 0 and dp[n][t - 1] == dp[n][m - 1]) t--;
//	cout << m - t;
//
//	return 0;
//}
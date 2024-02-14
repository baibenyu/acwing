///*
//步骤:
//	1.
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
//const int N = 1e3 + 1, V = 2e4 + 1;
//
//int t, m;
//int T[N], W[N];
//int dp[N][N];
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> t >> m;
//	for (int i = 1; i <= m; i++) cin >> T[i] >> W[i];
//
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= t; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (j >= T[i])dp[i][j] = max(dp[i][j], dp[i - 1][j - T[i]] + W[i]);
//		}
//	}
//
//	cout << dp[m][t];
//	return 0;
//}
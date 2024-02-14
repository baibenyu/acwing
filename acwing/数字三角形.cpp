///*
//步骤:
//	1.状态表示:f(i,j)表示由起点到第i行第j列这个点的所有路径中的最大值
//	2.状态分割:到f(i,j)的所有路径可以分成两类路径
//			  (1)从左上方f(i-1,j-1)到f(i,j)的路径
//			  (2)从右上方f(i-1,j)到f(i,j)的路径
//	3.状态转移:只需要取两类路径中的较大值即可
//	  即 f(i,j) = max(f(i-1,j-1),f(i-1,j))+a(i,j)
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 501,INF = 1e9;
//
//int n;
//int a[N][N], f[N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 1; i <= n; i++) for (int j = 1; j <= i; j++) cin >> a[i][j];
//	for (int i = 1; i <= n; i++) for (int j = 0; j <= i+1; j++) f[i][j] = -INF; // 因为每一行的开头与结尾都会越界,所以要多扩展一点
//
//	f[1][1] = a[1][1];
//	for (int i = 2; i <= n; i++) for (int j = 1; j <= i; j++) f[i][j] = max(f[i - 1][j - 1], f[i - 1][j]) + a[i][j];
//
//	int res = -INF;
//	for (int i = 1; i <= n; i++) res = max(res, f[n][i]);
//	cout << res << '\n';
//
//	return 0;
//}
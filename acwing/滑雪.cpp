///*
//本题在递归过程中不用考虑重复进入环的情况,因为本题要求高度,换言之不可能存在一个高度不同的环
//步骤:
//	1.状态的表示:f(i,j)表示从i,j这个点出发的所有路径中的最大长度
//	2.状态的分割:根据上下左右四个方向进行分割
//	3.状态的计算:f(i,j) = f(i-1,j)+1
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
//const int N = 301;
//
//int r, c;
//int f[N][N], h[N][N];
//int dx[4] = { 0,0,1,-1 }, dy[4] = {1,-1,0,0};
//
//int dp(int x, int y)
//{
//	if (f[x][y] != -1) return f[x][y];
//
//	f[x][y] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int a = dx[i] + x, b = dy[i] + y;
//		if (a >= 0 and a < r and b >= 0 and b < c and h[a][b] < h[x][y])
//		{
//			f[x][y] = max(f[x][y], dp(a, b) + 1);
//		}
//	}
//	return f[x][y];
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) for (int j = 0; j < c; j++)cin >> h[i][j];
//
//	memset(f, -1, sizeof(f));
//	int res = 0;
//	for (int i = 0; i < r; i++)for (int j = 0; j < c; j++)res = max(res, dp(i, j));
//
//	cout << res;
//	return 0;
//}
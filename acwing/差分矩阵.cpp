//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e3 + 1;
//
//int n, m, q;
//int a[N][N], b[N][N];
//
//void dif(int x1, int y1, int x2, int y2, int c)
//{
//	b[x1][y1] += c;
//	b[x1][y2 + 1] -= c;
//	b[x2 + 1][y1] -= c;
//	b[x2 + 1][y2 + 1] += c;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	for (int i = 1; i <= n; i++) // 求出a数组的差分数组
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			dif(i, j, i, j, a[i][j]);
//		}
//	}
//
//	int x1, x2, y1, y2, c;
//	for (int i = 1; i <= q; i++)
//	{
//		cin >> x1 >> y1 >> x2 >> y2 >> c;
//		dif(x1, y1, x2, y2, c);
//	}
//
//	for (int i = 1; i <= n; i++) // 求差分数组的前缀和
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
//			cout << b[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}
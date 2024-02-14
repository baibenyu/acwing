///*
//步骤:
//	1.状态的表示:f(k,i,j) 表示走k步的所有不同的两条路径中和的最大值
//	2.状态的划分:两条路径分别到达(i,k-i),(j,k-j)
//				(1)第一条路径往下,第二条路径往下
//				(2)第一条路径往下,第二条路径往右
//				(3)第一条路径往右,第二条路径往下
//				(4)第一条路径往右,第二条路径往右
//	3.状态的计算:由上述四种情况取最大值加本次状态新增值,
//				特别的当i==j时,两条路径到达了同一个点,该点只能被计算一次
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
//const int N = 11;
//
//int n;
//int w[N][N],f[N*2][N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int a, b, c;
//	while (true)
//	{
//		cin >> a >> b >> c;
//		if (!a and !b and !c) break;
//		w[a][b] = c;
//	}
//
//	for (int k = 2; k <= 2 * n; k++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (k - i >= 1 and k - i <= n and k - j >= 1 and k - j <= n)
//				{
//					int t = w[i][k - i];
//					if (i != j) t += w[j][k - j];
//					f[k][i][j] = max(f[k][i][j], f[k - 1][i - 1][j - 1] + t);
//					f[k][i][j] = max(f[k][i][j], f[k - 1][i][j - 1] + t);
//					f[k][i][j] = max(f[k][i][j], f[k - 1][i - 1][j] + t);
//					f[k][i][j] = max(f[k][i][j], f[k - 1][i][j] + t);
//				}
//			}
//		}
//	}
//
//	cout << f[2 * n][n][n];
//
//	return 0;
//}
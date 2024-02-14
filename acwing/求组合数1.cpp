///*
//步骤:
//	1.根据组合数的性质c(a,b) = c(a-1,b-1)+c(a-1,b)
//	2.我们可以预处理出数据范围内的所有组合数,类似于DP
//	3.查询时直接返回已求出的值即可
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 2005, mod = 1e9+7;
//
//int n;
//int c[N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (!j) c[i][j] = 1;
//			else c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % mod;
//		}
//	}
//	int a, b;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		cout << c[a][b] << '\n';
//	}
//
//	return 0;
//}
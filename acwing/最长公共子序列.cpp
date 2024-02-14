///*
//步骤:
//	1.状态的表示:f(i,j)表示A的前i个字母中和B的前j个字母中的最长公共子序列的长度
//	2.状态的分割:以公共子序列是否包含A的第i个字母与B的第j个字母进行分类
//				(1)均不包含,即f(i-1,j-1)
//				(2)均包含,即f(i-1,j-1)+1
//				(3)仅包含A,f(i,j-1)
//				(4)仅包含B,f(i-1,j)
//	3.状态的计算:从四种情况中取最大值即可,因为均不包含的情况被(3)(4)情况覆盖,所以没有具体写出
//				if (ai == bj) f(i,j) = f(i-1,j-1)+1;
//				else f(i,j) = max(f(i-1,j),f(i,j-1))
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e3 + 1;
//
//int n, m;
//int f[N][N];
//string a, b;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m;
//	cin >> a;
//	cin >> b;
//	a = ' ' + a, b = ' ' + b;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i] == b[j]) f[i][j] = f[i - 1][j - 1] + 1;
//			else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
//		}
//	}
//
//	cout << f[n][m] << '\n';
//	return 0;
//}
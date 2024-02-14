///*
//想知道为什么不可以对第j个数不同进行分类,分成第j个数为1,2,3...i,总共i类,那么
//f(i,j) = (f(i,j)+f(i-k,j-1))%mod.
//例如:3 1 2 或 3 2 1,这两个方案中3 1 2是不合法的,因为题目要求从大到小,但如果采用上述划分方法就会导致3 1 2被算入
//步骤:
//	1.状态的表示:f(i,j)表示用j个数的和等于i的所有选法
//	2.状态的分割:根据最小值是否是1分成两类
//				即 f(i-1,j-1) 或 f(i-j,j)
//	3.状态的计算:将所有满足条件的选法相加即为答案
//				即f(i,j) = f(i-1,j-1)+f(i-j,j)
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e3 + 1,mod = 1e9+7;
//
//int n;
//int f[N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//
//	f[0][0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			f[i][j] = (f[i - 1][j - 1] + f[i - j][j]) % mod;
//		}
//	}
//
//	int res = 0;
//	for (int i = 1; i <= n; i++) res = (res + f[n][i]) % mod;
//	cout << res;
//	return 0;
//}
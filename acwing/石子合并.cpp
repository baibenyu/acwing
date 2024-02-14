///*
//因为限制了只能相邻两堆合并,所以不能采用哈夫曼树的方法
//步骤:
//	1.状态的表示:f(i,j)表示从第i堆合并到第j堆的所有合并方式中的最小代价
//	2.状态的分割:最终合并成一堆之前,是由两堆石子合并而成,所以枚举这两堆石子的分界线即可
//	3.状态的计算:取不同分界线下的代价最小值即可
//				即f(i,j) = min(f(i,j),f(i,k)+f(k+1,j)+prefix(j)-prefix(i-1))
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 301;
//
//int n;
//int a[N],prefix[N], f[N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		prefix[i] = prefix[i - 1] + a[i];
//	}
//
//	for (int len = 2; len <= n; len++) // 必须采用长度+起始点来遍历,因为dp过程会用到较小的宽度的数据
//	{
//		for (int st = 1 ; st+len-1 <= n; st++)
//		{
//			int l = st, r = st + len - 1;
//			f[l][r] = 1e8;
//			for (int k = l; k < r; k++)
//			{
//				f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + prefix[r] - prefix[l - 1]);
//			}
//		}
//	}
//
//	cout << f[1][n];
//	return 0;
//}
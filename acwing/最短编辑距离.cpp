///*
//步骤:
//	1.状态的表示:f(i,j)表示A的前i个字符与B的前j个字符相等的最小操作数
//	2.状态的划分:根据所做的操作分成四类
//				(1)第i个与第j个字符相等,即无需任何操作
//				(2)第i个与第j个字符不相等,此时可进行3种操作
//					(2-1)删除操作,若删除第i个字符就能使得相等,说明前i-1个与前j个相等,即f(i-1,j)+1
//					(2-2)插入操作,若在第i个字符处插入就能使得相等,说明前i个与前j-1个相等,即f(i,j-1)+1
//					(2-3)替换操作,若替换第i个字符就能使得相等,说明前i-1个与前j-1个相等,即f(i-1,j-1)+1
//	3.状态的计算:根据上述四类取最小值即可
//				if (ai == bj) f(i,j) = f(i-1,j-1)
//				else f(i,j) = min(f(i-1,j-1)+1,f(i,j-1)+1,f(i-1,j)+1)
//	4.初始化
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
//int dist[N][N];
//string a, b;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n; cin >> a; cin >> m; cin >> b;
//
//	for (int i = 0; i <= n; i++) dist[i][0] = i;
//	for (int i = 0; i <= m; i++) dist[0][i] = i;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i - 1] == b[j - 1]) dist[i][j] = dist[i - 1][j - 1];
//			else
//			{
//				dist[i][j] = min(dist[i - 1][j], dist[i][j - 1]) + 1;
//				dist[i][j] = min(dist[i][j], dist[i - 1][j - 1] + 1);
//			}
//		}
//	}
//
//	cout << dist[n][m];
//
//	return 0;
//}
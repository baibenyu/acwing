///*
//步骤:
//	1.用邻接表表示树
//	2.状态的表示:f(i,j)表示以i为根结点的子树中是否选取i的所有选择中最大值
//	3.状态的分割:是否选取i
//	4.状态的计算:f(i,0) += max(f(i+1,0),f(i+1,1))
//				f(i,1) += f(i+1,0)
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
//
//const int N = 1e5 + 1;
//
//int n,idx;
//int h[N], v[N], nx[N], happy[N];
//int f[N][2];
//bool has_father[N];
//
//void add(int a, int b)
//{
//	v[idx] = b, nx[idx] = h[a], h[a] = idx++;
//}
//
//void dfs(int cur)
//{
//	f[cur][1] = happy[cur];
//	for (int i = h[cur]; i != -1; i = nx[i])
//	{
//		int j = v[i];
//		dfs(j);
//		f[cur][1] += f[j][0];
//		f[cur][0] += max(f[j][0], f[j][1]);
//	}
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> happy[i];
//
//	int k, l;
//	memset(h, -1, sizeof(h));
//	for (int i = 0; i < n - 1; i++)
//	{
//		cin >> l >> k;
//		add(k, l);
//		has_father[l] = true;
//	}
//
//	int root = 1;
//	while (has_father[root]) root += 1;
//
//	dfs(root);
//
//	cout << max(f[root][0], f[root][1]);
//
//	return 0;
//}
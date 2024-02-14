//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e4 + 1;
//
//int n, m;
//int p[N];
//
//int find_parent(int cur)
//{
//	if (cur != p[cur]) p[cur] = find_parent(p[cur]); //路径压缩
//	return p[cur]; //此处返回父节点值
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	
//	cin >> n >> m;
//	for (int i = 0; i <= n; i++) p[i] = i;
//	int z, x, y;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> z >> x >> y;
//		if (z == 1) p[find_parent(x)] = find_parent(y);
//		else
//		{
//			if (find_parent(x) == find_parent(y)) cout << 'Y' << '\n';
//			else cout << 'N' << '\n';
//		}
//	}
//	return 0;
//}
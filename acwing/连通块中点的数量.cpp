//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n, m;
//int p[N],cnt[N];
//
//int find_p(int x)
//{
//	if (p[x] != x) p[x] = find_p(p[x]);
//	return p[x];
//}
//
//void union_node(int x, int y)
//{
//	int px = find_p(x), py = find_p(y);
//	if (px != py)
//	{
//		p[px] = py;
//		cnt[py] += cnt[px];
//	}
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		p[i] = i;
//		cnt[i] = 1;
//	}
//
//	char op;
//	int t, a, b;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> op;
//		if (op == 'C')
//		{
//			cin >> a >> b;
//			union_node(a, b);
//		}
//		else
//		{
//			cin >> t;
//			if (t == 1)
//			{
//				cin >> a >> b;
//				if (find_p(a) == find_p(b)) cout << "Yes" << '\n';
//				else cout << "No" << '\n';
//			}
//			else
//			{
//				cin >> a;
//				cout << cnt[find_p(a)] << '\n';
//			}
//		}
//	}
// 
// 
//	return 0;
//}
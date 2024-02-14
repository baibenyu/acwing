///*
//步骤:
//	1.采用邻接表建图
//	2.采用BFS遍历所有图中的结点
//
//*/
//
//
//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <unordered_map>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n, m,cur;
//int h[N], v[N], nx[N];
//queue<int> q;
//unordered_map<int, int> dist;
//
//void add(int a, int b)
//{
//	cur += 1,v[cur] = b, nx[cur] = h[a], h[a] = cur;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m;
//	int a, b;
//	memset(h, -1, sizeof(h));
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b;
//		add(a, b);
//	}
//
//	dist[1] = 0;
//	q.push(1);
//
//	while (!q.empty())
//	{
//		int temp = q.front();
//		q.pop();
//		for (int i = h[temp]; i != -1; i = nx[i])
//		{
//			int j = v[i];
//			if (!dist.count(j)) // 即使不是无向图,也可能出现a->b,b->a,即仍可能出现死循环
//			{
//				dist[j] = dist[temp] + 1;
//				q.push(j);
//			}
//		}
//	}
//
//	cout << dist[n];
//	return 0;
//}
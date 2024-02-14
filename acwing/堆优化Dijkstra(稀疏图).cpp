///*
//稀疏图采用邻接表
//邻接表中w表示上一个结点到当前结点的边的长度
//时间复杂度:O((m+n)logm)
//步骤:
//	1.初始化起点到各点的距离为正无穷,到自己距离为0
//	2.用小根堆找到离起点最近的点,小根堆存储单元为(距离,编号)
//	2.将该点标记为已确定
//	3.用找到的点更新其它点到起点的距离
//*/
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <numeric>
//#include <cstring>
//
//using namespace std;
//typedef pair<int, int> PII;
//
//const int N = 1e5 + 1;
//
//int n, m, cur;
//int h[N], v[N], nx[N], w[N];
//int dist[N], flag[N];
//
//void add(int a, int b, int c)
//{
//	w[cur] = c, v[cur] = b, nx[cur] = h[a], h[a] = cur++;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n >> m;
//	int x, y, z;
//	
//	memset(h, -1, sizeof(h));
//
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> x >> y >> z;
//		add(x, y, z);
//	}
//
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	int idx, distance;
//	priority_queue<PII, vector<PII>, greater<PII>> minheap;
//	minheap.push({ 0, 1 });
//
//	while (!minheap.empty())
//	{
//		auto t = minheap.top();
//		distance = t.first, idx = t.second;
//		minheap.pop();
//
//		if (flag[idx]) continue;
//		flag[idx] = true;
//
//		for (int i = h[idx]; i != -1; i = nx[i])
//		{
//			int j = v[i];
//			if (!flag[j] and distance + w[i] < dist[j])
//			{
//				dist[j] = distance + w[i];
//				minheap.push({ dist[j],j });
//			}
//		}
//	}
//
//	if (dist[n] == 0x3f3f3f3f) cout << "-1";
//	else cout << dist[n] << '\n';
//
//	return 0;
//}
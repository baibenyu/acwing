///*
//SPFA算法是基于BF算法的优化,具体优化了更新的步骤
//不局限于负权图,也可以用于仅正权图
//时间复杂度:O(nm),一般情况下,时间复杂度远优于nm
//步骤:
//	1.用邻接表存储
//	2.初始化到所有点的距离为无穷,到自身距离为0
//	3.将可能被更新的点加入到队列中,去更新它的出边的结点的值
//	4.若出边的结点被更新了,且队列中没有该结点(避免重复更新),加入队列中
//*/
//
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n, m, cur;
//int h[N], v[N], nx[N], w[N];
//int dist[N], flag[N];
//
//void add(int a, int b, int z)
//{
//	w[cur] = z, v[cur] = b, nx[cur] = h[a], h[a] = cur++;
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
//	queue<int> q;
//	q.push(1);
//
//	while (!q.empty())
//	{
//		auto t = q.front();
//		q.pop();
//		flag[t] = false;
//
//		for (int i = h[t]; i != -1; i = nx[i])
//		{
//			int j = v[i];
//			if (dist[t] + w[i] < dist[j])
//			{
//				dist[j] = dist[t] + w[i];
//				if (!flag[j]) q.push(j), flag[j] = true;
//			}
//		}
//	}
//
//	if (dist[n] == 0x3f3f3f3f) cout << "impossible";
//	else cout << dist[n] << '\n';
//	return 0;
//}
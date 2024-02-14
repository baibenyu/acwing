///*
//SPFA算法是基于BF算法的优化,具体优化了更新的步骤
//步骤:
//	1.用邻接表存储
//	2.初始化到所有点的距离为无穷,到自身距离为0
//	3.将可能被存在负环的点加入到队列中(一开始无法进行筛选,有可能最短距离不需要经过负环,必须全部加入)
//	  去更新它的出边的结点的值以及对应值所需的边数
//	  如果到达任意一个结点所需的边数超过n-1条,说明含有负环,退出
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
//int dist[N], flag[N],cnt[N];
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
//	memset(h, -1, sizeof(h));
//
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> x >> y >> z;
//		add(x, y, z);
//	}
//
//	queue<int>heap;
//	for (int i = 1; i <= n; i++)
//	{
//		heap.push(i);
//		flag[i] = true;
//	}
//	
//	while (!heap.empty())
//	{
//		auto t = heap.front();
//		heap.pop();
//		flag[t] = false;
//
//		for (int i = h[t]; i != -1; i = nx[i]) 
//		{
//			int j = v[i]; // j是结点对应编号,而i是邻接表编号
//			if (dist[t] + w[i] < dist[j])
//			{
//				dist[j] = dist[t] + w[i];
//				cnt[j] = cnt[t] + 1;
//				if (cnt[j] > n - 1)
//				{
//					cout << "Yes" << '\n';
//					return 0;
//				}
//				if (!flag[j]) heap.push(j), flag[j] = true;
//			}
//		}
//	}
//
//	cout << "No";
//	return 0;
//}
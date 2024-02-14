///*
//拓扑图:有向无环图,决定了图中结点的次序
//	1.度:每个结点都有的属性,分为入度和出度
//		1-1.入度:从其他结点指向当前结点的边的数量
//		1-2.出度:从当前结点指向其它结点的边的数量
//步骤:
//	1.让所有入度为0的结点进入队列中
//	2.枚举所有结点的出边
//	3.删除出边对后续结点的影响,即后续结点的入度减一
//	4.如果后续结点的入度为0,则入队
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
//int h[N], v[N], nx[N],ans[N];
//queue<int> q;
//unordered_map<int, int> in;
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
//		in[b] += 1;
//	}
//
//	for (int i = 1; i <= n; i++) if (in[i] == 0) q.push(i);
//
//	int count = 0;
//	while (!q.empty())
//	{
//		int temp = q.front();
//		ans[count++] = temp;
//		q.pop();
//		for (int i = h[temp]; i != -1; i = nx[i])
//		{
//			int j = v[i];
//			in[j] -= 1;
//			if (in[j] == 0) q.push(j);
//		}
//	}
//
//	if (count == n) for (int i = 0; i < n; i++) cout << ans[i] << ' ';
//	else cout << "-1";
//
//	return 0;
//}
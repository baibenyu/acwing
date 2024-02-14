///*
//时间复杂度:O(mn),平均远小于n*m
//步骤:
//	1.采用邻接表存储图
//	2.虽然是无向边,但只会用到左->右,所以仅单向存储
//	3.每次都需要重置flag数组,因为仅对于一个男生有用
//	4.如何让匹配的组数最多?
//		4-1.尝试匹配所有可选的人
//		4-2.如果可选的人尚未匹配,则匹配成功 or
//			可选的人已匹配,那么尝试ntr可选的人,让他去选别人
//			如果ntr成功,那么匹配成功,失败则匹配失败
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n1, n2, m,cur;
//int h[N], v[N], nx[N],match[N];
//bool flag[N];
//
//void add(int a, int b)
//{
//	v[cur] = b, nx[cur] = h[a], h[a] = cur++;
//}
//
//bool find(int x)
//{
//	for (int i = h[x]; i != -1; i = nx[i])
//	{
//		int j = v[i];
//		if (!flag[j])
//		{
//			flag[j] = true;
//			if (!match[j] or find(match[j]))
//			{
//				match[j] = x;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n1 >> n2 >> m;
//	int u, v;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v;
//		add(u, v);
//	}
//	
//	int res = 0;
//	for (int i = 1; i <= n1; i++)
//	{
//		memset(flag, false, sizeof(flag));
//		if (find(i)) res += 1;
//	}
//
//	cout << res;
//	return 0;
//}
///*
//DFS
//步骤:
//1.本题求连通块中结点数的最大值最小.
//  首先思考朴素算法,逐个尝试删除所有节点并求出其它部分的最大值.
//2.将被删除的结点视为根结点,其余连通块就是根结点的子树以及当前结点的父连通块.
//  父连通块 = 总结点数-树的结点数
//  那么就转化成求每个子树的结点个数,并取最大值
//3.如何求树的节点个数,并取最大值?
//  3-1.在递归中自底向上返回子树的结点个数
//  3-2.在递归中维护一个最大值
//4.建一个邻接表,之所以不建树是因为,节点数不确定,且如果建树那么根结点必须位于最上方
//  即针对每一个结点都要重新建树,较为繁琐.树是特殊的图(无环有向图)
//*/
//
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n,cur, ans = 1e9;
//int h[N], v[2*N], nx[2*N],flag[N];
//
//void add(int a, int b)
//{
//	v[cur] = b;
//	nx[cur] = h[a];
//	h[a] = cur++;
//}
//
//int dfs(int k)
//{
//	flag[k] = true;
//	int allnodes = 1, maxnodes = 0;
//
//	for (int i = h[k]; i != -1; i = nx[i])
//	{
//		int j = v[i],t = 0;
//		if (!flag[j])
//		{
//			t = dfs(j);
//			allnodes += t;
//			maxnodes = max(maxnodes, t);
//		}
//	}
//	maxnodes = max(maxnodes, n - allnodes);
//	ans = min(ans, maxnodes);
//	return allnodes;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n;
//	memset(h, -1, sizeof(h));
//	int a, b;
//	for (int i = 0; i < n-1; i++)
//	{
//		cin >> a >> b;
//		add(a, b), add(b, a);
//	}
//	
//	dfs(1);
//	cout << ans;
//	return 0;
//}
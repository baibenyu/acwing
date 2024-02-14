//// DFS
//// 数据结构:栈 空间:O(h) 难点:回溯,剪枝
//// 搜索:有方向的枚举
//// 步骤:
//// 1.确定搜索答案的顺序(关键!!!)
//// 2.回溯时要恢复现场,针对同一层递归中的每一次搜索,它所受到的限制应当是一致的
////
//
//#include <iostream>
//
//using namespace std;
//
//const int N = 10;
//
//int n;
//int path[N], flag[N];
//
//void dfs(int k)
//{
//	if (k == n)
//	{
//		for (int i = 0; i < n; i++) cout << path[i] << ' ';
//		cout << '\n';
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!flag[i])
//		{
//			path[k] = i;
//			flag[i] = true;
//			dfs(k + 1);
//			flag[i] = false;
//		}
//	}
//}
//
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	dfs(0);
//
//	return 0;
//}
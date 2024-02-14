// /*
// BFS
// 步骤:
// 1.如果用BFS求最短路,那么就需要节点,将图当前的状态视为一个节点,
//   那么题目就变成求从起始节点到终止节点最短路径
// 2.如何表示状态?
//   不采用二维数组,维护困难.
//   采用字符串表示图的状态,从左到右从上到下依次排列
// 3.虽然本题是BFS,但仍然需要恢复现场,因为题目中的状态都是由同一个状态引申出来的,改变后应该恢复
// */
//
//
//
//#include <iostream>
//#include <string>
//#include <queue>
//#include <unordered_map>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	string start="",target = "12345678x";
//	for (int i = 0; i < 9; i++)
//	{
//		char c;
//		cin >> c;
//		start += c;
//	}
//
//	queue<string> q;
//	unordered_map<string, int> dist;
//	int dx[4] = { 0,0,1,-1 }, dy[4] = { 1,-1,0,0 };
//	q.push(start);
//	dist[start] = 0;
//
//	while (!q.empty())
//	{
//		auto cur = q.front();
//		int distance = dist[cur];
//		q.pop();
//		if (cur == target)
//		{
//			cout << distance;
//			return 0;
//		}
//		int pos = cur.find('x');
//		int x = pos / 3, y = pos % 3;
//		for (int i = 0; i < 4; i++)
//		{
//			int a = x + dx[i], b = y + dy[i];
//			if (a >= 0 and a < 3 and b >= 0 and b < 3)
//			{
//				swap(cur[pos], cur[a * 3 + b]);
//				if (!dist.count(cur)) // 状态是否出现过,若出现过,dist中一定有距离值
//				{
//					q.push(cur);
//					dist[cur] = distance + 1;
//				}
//				swap(cur[pos], cur[a * 3 + b]); // 恢复现场防止后三个尝试出错
//			}
//		}
//	}
//
//
//	return 0;
//}
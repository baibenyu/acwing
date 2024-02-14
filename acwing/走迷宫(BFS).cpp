//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//typedef pair<int, int> PII;
//
//const int N = 101;
//
//int n, m,ans;
//queue<PII> q;
//bool matrix[N][N],flag[N][N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> matrix[i][j];
//
//	int x = 0, y = 0;
//	int dx[4] = { 0,0,1,-1 }, dy[4] = { 1,-1,0,0 };
//	q.push({ x,y });
//
//	while (!q.empty())
//	{
//		int length = q.size();
//		for (int k = 0; k < length; k++) // 一次一层
//		{
//			x = q.front().first, y = q.front().second;
//			q.pop();
//			if (x == n - 1 and y == n - 1)
//			{
//				cout << ans << '\n';
//				return 0;
//			}
//			else
//			{
//				for (int i = 0; i < 4; i++)
//				{
//					int tx = x + dx[i], ty = y + dy[i];
//					if (tx >= 0 and tx < n and ty >= 0 and ty < m and !flag[tx][ty] and !matrix[tx][ty])
//					{
//						flag[tx][ty] = true;
//						q.push({ tx,ty });
//					}
//				}
//			}
//		}
//		ans += 1;
//	}
//
//	return 0;
//}
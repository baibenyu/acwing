//#include <iostream>
//#include <algorithm>
//#include <fstream>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n, k, res;
//int p[N], dist[N];
//
//int find_p(int x)
//{
//	if (p[x] != x)
//	{
//		int root = find_p(p[x]);
//		dist[x] += dist[p[x]];
//		p[x] = root;
//	}
//	return p[x];
//}
//
//// 思路:利用到根结点的距离来表示当前结点的类型
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	ifstream in(R"(C:\Users\baibe\source\repos\acwing\acwing\RandomData.txt)");
//
//	// Open the output file
//	ofstream out("C:\\Users\\baibe\\source\\repos\\acwing\\acwing\\data1.txt");
//
//	in >> n >> k;
//	for (int i = 1; i <= n; i++) p[i] = i;
//	int d, x, y;
//	for (int i = 1; i <= k; i++)
//	{
//		in >> d >> x >> y;
//		if (x > n or y > n) res += 1;
//		else
//		{
//			int px = find_p(x), py = find_p(y);
//			if (d == 1)
//			{
//				if (px == py and (dist[x] - dist[y]) % 3 != 0)  res += 1; // 不能直接比较,因为dist的值可能为负数,-1与2是同类型的,但是mod3的值不同
//				else if (px != py)
//				{
//					p[px] = py;
//					dist[px] = dist[y] - dist[x];
//				}
//			}
//			else
//			{
//				if (px == py and (dist[x] - dist[y] - 1) % 3 != 0) res += 1;
//				else if (px != py)
//				{
//					p[px] = py;
//					dist[px] = dist[y] - dist[x] + 1;
//				}
//			}
//		}
//
//	}
//
//	cout << res << '\n';
//
//	out << res << '\n';
//	// Close the input and output files
//	in.close();
//	out.close();
//
//	return 0;
//}
//
//
//

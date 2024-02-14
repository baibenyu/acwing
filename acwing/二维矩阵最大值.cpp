//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 121;
//
//int n;
//int prefix[N][N];
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n;
//	int temp;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> temp;
//			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + temp; // 生成二维前缀和
//		}
//	}
//
//	int res = -1e9;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int a = 0; a <= i; a++)
//			{
//				for (int b = 0; b <= j; b++)
//				{
//					res = max(res, prefix[i][j] - prefix[i - a][j] - prefix[i][j - b] + prefix[i - a][j - b]); // 求子矩阵和
//				}
//			}
//		}
//	}
//
//	cout << res;
//	return 0;
//}
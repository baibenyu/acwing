//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 1;
//
//int n, m, x;
//int a[N], b[N];
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n >> m >> x;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < m; i++) cin >> b[i];
//
//	int i = 0, j = 0;
//	while (i < n and j < m)
//	{
//		if (a[i] + b[j] == x)
//		{
//			cout << i << ' ' << j;
//			return 0;
//		}
//		else
//		{
//			if (a[i + 1] - a[i] <= b[j + 1] - b[j]) i += 1;
//			else j += 1;
//		}
//	}
//	return 0;
//}
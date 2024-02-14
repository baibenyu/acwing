//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 1;
//
//int n, m;
//int s[N];
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n;
//	int temp = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> temp;
//		s[i] = s[i - 1] + temp;
//	}
//
//	cin >> m;
//	int l, r;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> l >> r;
//		cout << s[r] - s[l - 1] << '\n';
//	}
//	return 0;
//}
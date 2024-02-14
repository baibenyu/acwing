///*
//步骤:
//	1.
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//typedef pair<int, int> PII;
//typedef unsigned long long ULL;
//
//const int N = 2e5 + 1;
//
//int t, n;
//int a[N];
//
//void change(int l, int r)
//{
//	a[l] += 1;
//	a[r + 1] -= 1;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> t;
//	while (t)
//	{
//		t -= 1;
//		cin >> n;
//		int op;
//		memset(a, 0, sizeof(a));
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> op;
//			if (op) change(max(1, i - op + 1), i);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			a[i] += a[i - 1];
//			cout << (a[i] != 0 ? 1 : 0) << ' ';
//		}
//
//		cout << '\n';
//	}
//
//	return 0;
//}
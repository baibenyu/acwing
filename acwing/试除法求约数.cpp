///*
//步骤:
//	1.从小到大枚举所有可能的约数
//	2.若是约数,加入数组中,若n/约数不同,则也加入数组中,避免了添加重复数
//*/
//
//#include <iostream>
//#include <algorithm>
//
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n;
//int ans[N];
//
//void isdivisor(int x)
//{
//	int cur = 0;
//	for (int i = 1; i <= x / i; i++)
//	{
//		if (x % i == 0)
//		{
//			ans[cur++] = i;
//			if (x / i != i) ans[cur++] = x / i;
//		}
//	}
//	sort(ans, ans + cur);
//
//	for (int i = 0; i < cur; i++) cout << ans[i] << ' ';
//	cout << '\n';
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int t;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> t;
//		isdivisor(t);
//	}
//
//	return 0;
//}
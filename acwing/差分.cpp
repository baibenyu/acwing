//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 1;
//
//int n, m;
//int a[N], b[N];
//
//void dif(int l, int r, int c)
//{
//	b[l] += c;
//	b[r + 1] -= c;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= n; i++) dif(i, i, a[i]); // 对a数组的单点差分,最终可以形成a数组的差分数列
//
//	for (int i = 1; i <= m; i++)
//	{
//		int l, r, c;
//		cin >> l >> r >> c;
//		dif(l, r, c);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		b[i] += b[i - 1]; // 前缀和是差分的逆运算,所以差分数组求前缀和就能得到原数组
//		cout << b[i] << ' ';
//	}
//	return 0;
//}
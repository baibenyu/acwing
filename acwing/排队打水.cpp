///*
//步骤:
//	1.若要总等待时间最少,那么尽可能快的减少等待的人数,让等的人等的时间尽可能短,
//	  即装满水时间短的人先装
//	2.按装水时间从小到大排序
//	3.遍历所有人,计算总等待时间
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n;
//int a[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	sort(a, a + n);
//	long long res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		res += a[i] * (n - i - 1);
//	}
//	cout << res;
//	return 0;
//}
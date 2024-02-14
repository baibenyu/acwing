///*
//试除法
//时间复杂度:虽然理论也是O(n^(0.5)),但是只要是某个质数的n次幂就会极大加速这个过程
//步骤:
//	1.仍然仅遍历到n^(0.5),但是针对每一个质因子都除到不能再除,并统计次数
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n;
//
//void divide(int x)
//{
//	int cnt;
//
//	for (int i = 2; i <= x / i; i++)
//	{
//		if (x % i == 0)
//		{
//			cnt = 0;
//			while (x % i == 0)
//			{
//				x /= i;
//				cnt += 1;
//			}
//			cout << i << ' ' << cnt << '\n';
//		}
//	}
//
//	if (x > 1) cout << x << ' ' << 1 << '\n';
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int x;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		divide(x);
//		cout << '\n';
//	}
//
//	return 0;
//}

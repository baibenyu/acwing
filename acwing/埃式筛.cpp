///*
//埃式筛
//步骤:
//   1.所有大于1的整数都可以分解质因数(包括合数),合数一定能表示成若干质数相乘,即合数一定是质数的倍数
//   2.如果把所有质数的倍数都标记为合数,那么剩下未标记的都是质数
//   3.埃式筛优化--标记合数时可以从质数的平方开始标记
//	   因为所有小于平方值的合数都已经被更小的质数标记了
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e6 + 1;
//
//int n, cnt;
//bool flag[N];
//
//void isprime(int x)
//{
//	for (int i = 2; i <= x; i++)
//	{
//		if (!flag[i])
//		{
//			cnt += 1;
//			for (int j = i; j <= x / i; j++) flag[i * j] = true;
//		}
//	}
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	isprime(n);
//	cout << cnt;
//
//	return 0;
//}
///*
//线性筛法求欧拉函数
//f(n) = n*(1-(1/p0))*(1-(1/p1))*...
//步骤:
//	1.在线性筛质数的过程中也可以知道欧拉函数的值
//	2.如果某个数是质数,那么它所对应的欧拉函数的个数就等于质数-1
//	3.如果不是质数
//		3-1.primes[j]是i的质因子,所以primes[j]是p0-pk中的任意一个值,根据上述f(n)公式可知
//			f(primes[j]*i) = primes[j]*i*(1-(1/p0))*(1-(1/p1))*...
//						   = primes[j]*f(i)
//
//		3-2.primes[j]不是i的质因子,所以primes[j]不是p0-pk中的任意一个值,根据上述f(n)公式可知
//			f(primes[j]*i) = primes[j]*i*(1-(1/p0))*(1-(1/p1))*...*(1-(1/primes[j]))
//						   = primes[j]*f(i)*(1-(1/primes[j]))
//						   = (primes[j]-1)*f(i)
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//typedef long long LL;
//
//const int N = 1e6 + 1;
//
//int n, cnt;
//int primes[N],phi[N];
//bool flag[N];
//
//void iseuler(int x)
//{
//	phi[1] = 1;
//
//	for (int i = 2; i <= x; i++)
//	{
//		if (!flag[i])
//		{
//			primes[cnt++] = i;
//			phi[i] = i - 1;
//		}
//		for (int j = 0; primes[j] <= x / i; j++)
//		{
//			flag[primes[j] * i] = true;
//			if (i % primes[j] == 0)
//			{
//				phi[primes[j] * i] = phi[i] * primes[j];
//				break;
//			}
//			phi[primes[j] * i] = phi[i] * (primes[j]-1);
//		}
//	}
//
//	LL res = 0;
//	for (int i = 1; i <= x; i++) res += phi[i];
//	cout << res << '\n';
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	iseuler(n);
//
//	return 0;
//}
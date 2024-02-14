///*
//线性筛
//步骤:
//	1.确保每个合数都被自身最小的质因数筛掉,即解决埃式筛的重复标记问题
//	2.如何保证?
//		2-1.从2开始遍历所有值
//			2-1-1.升序记录所有质数
//			2-1-2.升序遍历已经知道的质数,将该质数的i倍标记为合数,
//				  如果i % prime[j]等于0,跳出该循环
//				  其中分为两种情况:
//				  (1)prime[j] 是 i 的质因子,那么prime[j]此时一定是i的最小质因子,因为我们升序遍历质数
//				  同时也是i*primes[j]的最小质因子.
//				  因为 i*primes[j] = prime[j]*(其余较大的质数相乘)*prime[j]
//				  (2)prime[j] 不是 i 的质因子,那么prime[j]此时一定小于i的最小质因子,因为我们升序遍历质数
//				  同时也是i*primes[j]的最小质因子.
//				  因为 i*primes[j] = (其余较大的质数相乘)*prime[j]
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
//int primes[N];
//bool flag[N];
//
//void isprime(int x)
//{
//	for (int i = 2; i <= x; i++)
//	{
//		if (!flag[i]) primes[cnt++] = i;
//		for (int j = 0; primes[j] <= x / i; j++)
//		{
//			flag[primes[j] * i] = true;
//			if (i % primes[j] == 0) break;
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
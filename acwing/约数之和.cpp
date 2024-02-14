///*
//步骤:
//	1.如果数N分解质因数后,N = p0^a0*p1^a1*p2^a2*p3^a3....
//	  那么约数也可以写成形如 c =  p0^b0*p1^b1*p2^b2*p3^b3....
//	  一个约数由所有的b共同决定:
//	  约数之和 = (p0^0+p0^1+p0^2+...+p0^a0)*(p1^0+p1^1+p1^2+...+p1^a1)*...
//	  所有的约数 = 所有b的组合,即约数之和 = 组合之和
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//typedef long long LL;
//
//const int N = 1e5 + 1, mod = 1e9 + 7;
//
//int n;
//unordered_map<int, int> primes;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int t;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> t;
//		for (int j = 2; j <= t / j; j++)
//		{
//			while (t % j == 0)
//			{
//				t /= j;
//				primes[j] += 1;
//			}
//		}
//		if (t > 1) primes[t] += 1;
//	}
//
//	LL res = 1;
//	for (auto prime : primes)
//	{
//		int p = prime.first, a = prime.second;
//		LL t = 1;
//		while (a--) t = (t * p + 1) % mod;
//		res = res * t % mod;
//	}
//
//	cout << res;
//	return 0;
//}
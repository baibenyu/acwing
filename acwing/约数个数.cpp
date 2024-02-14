///*
//步骤:
//	1.如果数N分解质因数后,N = p0^a0*p1^a1*p2^a2*p3^a3....
//	  那么约数也可以写成形如 c =  p0^b0*p1^b1*p2^b2*p3^b3....
//	  c必然是N的约数,因为b<=a,所以b可以取0-a,总共(a+1)个选择
//	  那么总的约数 = (a0+1)*(a1+1)*(a2+1)*....
//
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
//const int N = 1e5 + 1,mod = 1e9+7;
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
//				primes[j] += 1;
//				t /= j;
//			}
//		}
//		if (t > 1) primes[t] += 1;
//	}
//
//	LL res = 1;
//	for (auto prime : primes)
//	{
//		res = (res * (prime.second + 1)) % mod;
//	}
//
//	cout << res;
//	return 0;
//}
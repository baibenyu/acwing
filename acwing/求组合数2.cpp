///*
//步骤:
//	1.此题的数据范围在1e5,所以n^2的算法不适用
//	2.同样可以预处理问题,不过不是直接得到组合数的值,而是求出阶乘以及阶乘对应的乘法逆元
//	3.采用乘法逆元是因为组合数的公式有除法且分段计算得到
//	4.因为模数是质数,所以根据欧拉定理以及费马小定理得知a的乘法逆元就是对应的a^(mod-2)
//	  采用快速幂来得到a的幂
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//typedef long long LL;
//
//const int N = 1e5 + 1, mod = 1e9 + 7;
//
//int n;
//int fact[N], infact[N];
//
//int ebs(int a, int k, int p)
//{
//	int res = 1;
//	while (k)
//	{
//		if (k & 1) res = (LL)res * a % p;
//		a = (LL)a * a % p;
//		k >>= 1;
//	}
//	return res;
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	fact[0] = infact[0] = 1;
//	for (int i = 1; i <= N; i++)
//	{
//		fact[i] = (LL)fact[i - 1] * i % mod;
//		infact[i] = (LL)infact[i - 1] * ebs(i, mod - 2, mod) % mod;
//	}
//
//	int a, b;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		cout << (LL)fact[a] * infact[a - b] % mod * infact[b] % mod << '\n';
//	}
//
//	return 0;
//}
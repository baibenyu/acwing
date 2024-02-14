///*
//考察的知识点:卡特兰数的通项公式,快速幂,求乘法逆元,欧拉定理与费马小定理,模运算
//步骤:
//	1.经典卡特兰数问题
//	2.卡特兰数 = C(2*n,n)/(n+1) = 2n!/(n+1)/n!/n! = (2n!/n!)/(n+1)/n!
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
//const int N = 1e5 + 1,mod = 1e9+7;
//
//int n;
//
//int ebs(int a, int k)
//{
//	int res = 1;
//	while (k)
//	{
//		if (k & 1) res = (LL)res * a % mod;
//		a = (LL)a * a % mod;
//		k >>= 1;
//	}
//	return res;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int res = 1;
//	for (int i = 1, j = 2 * n; i <= n; i++, j--)
//	{
//		res = (LL)res * j % mod;
//		res = (LL)res * ebs(i, mod - 2) % mod;
//	}
//	res = (LL)res * ebs(n+1, mod - 2) % mod;
//	cout << res;
//	return 0;
//}
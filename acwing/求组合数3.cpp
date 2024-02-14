///*
//步骤:
//	1.卢卡斯定理: c(a,b) % p = c(a%p,b%p)*c(a/p,b/p) % p
//	2.通过卢卡斯定理,我们把预处理的范围降到1e5,然后才可以继续采用求组合数2的方法
//	3.因为询问的次数较少所以我们可以针对每一对a和b都计算一次
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
//const int N = 1e5 + 1;
//
//int p,n;
//
//int ebs(int a, int k)
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
//int C(int a, int b)
//{
//	int down = 1,up = 1;
//	for (int i = 1,j = a; i <= b; i++,j--)
//	{
//		down = (LL)down * j % p;
//		up = (LL)up * i % p;
// 	}
//
//	return down*ebs(up,p-2)%p;
//}
//
//int locus(LL a, LL b)
//{
//	if (a < p and b < p) return C(a, b);
//	else return (LL)C(a % p, b % p)* locus(a / p, b / p) % p;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	LL a, b;
//	while (n--)
//	{
//		cin >> a >> b >> p;
//		cout << locus(a, b) << '\n';
//	}
//	return 0;
//}
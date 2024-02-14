///*
//模运算中的乘法逆元:
//当a与b互质,若整数x满足a*x % b = 1,那么x就是a关于模b的乘法逆元
//
//主要解决了模运算当中因一次性计算数字过大,导致分步计算无法整除的问题,
//例如最终的运算数超出long long的范围导致必须在每一步都进行模运算加其它运算
//其中若有除法运算会导致精度损失,如4/3.最终结果会错误
//而将除数转成对应的乘法逆元就不会损失精度
//
//步骤:
//	1.当a与b互质,且b是质数时,根据费马小定理可知a^(b-1) % b = 1
//	  即a*a^(b-2) % b = 1,此时乘法逆元x = a^(b-2),
//    所以问题转化为求a的b-2次幂,可用快速幂求解
// 
//	2.若a与b不互质,此时逆元不存在
//	  因为b是质数(没有约数的),a不可能是b的约数,只能是b的倍数.
//    即a是b的倍数等价于a与b不互质
//
//*/
//
//
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n;
//
//int ebs(int a, int k,int p)
//{
//	int res = 1;
//	while (k)
//	{
//		if (k & 1) res = (long long)res * a % p;
//		a = (long long)a * a % p;
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
//
//	int a, p;
//	for (int i = 0; i < n; i++)
//	{
//		cin >>a >> p;
//		int res = ebs(a, p - 2, p);
//		if (a % p) cout << res << '\n';
//		else cout << "impossible\n";
//	}
//
//	return 0;
//}
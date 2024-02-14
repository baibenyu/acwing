///*
//时间复杂度:O(n*sqrt(a))
//欧拉定理:若a与n互质,那么a^f(n) % n = 1;
//费马小定理:在欧拉定理基础上,若n是质数,f(n) = n-1,即a^(n-1) % n = 1;
// 
//步骤:
//	1.欧拉函数表示1-n中与n互质的数的个数
//	  如果数N分解质因数后,N = p0^a0*p1^a1*p2^a2*p3^a3....
//	  f(n) = n*(1-(1/p0))*(1-(1/p1))*...
//	2.原理:
//	  f(n)减去所有p的倍数的个数,但是有些数是公倍数,会被不同的数都减一遍,
//	  即被多减了,要加回来,但是在加回来的过程中,同理又会多加,
//	  所以又要减回去,如此往复,直至p的个数达到上限
//	  pi的倍数的个数 = n/pi;
//	  f(n) = n-(pi的倍数)+(pi*pj的倍数)-(pi*pj*pk的倍数)+...
//		   = 提取n后化简
//		   = n*(1-(1/p0))*(1-(1/p1))*...
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
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//
//	int a;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		int res = a;
//
//		for (int j = 2; j <= a / j; j++)
//		{
//			if (a % j == 0)
//			{
//				res = res * (j - 1) / j;
//				while (a % j == 0) a /= j;
//			}
//		}
//		if (a > 1) res = res * (a - 1) / a;
//		cout << res << '\n';
//	}
//
//	return 0;
//}
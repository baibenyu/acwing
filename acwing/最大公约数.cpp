///*
//* 欧几里得法(辗转相除法)
//步骤:
//	1.若 a % d = 0 and b % d = 0 ,那么 (ax+by) % d = 0;
//	2.a % b = a-(a/b)*b
//	  根据上述定理,可知(a % b ) % d = 0;
//	  所以要求d的值可以通过不断等价
//	  gcd(a,b) = gcd(b,a%b);
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int gcd(int a, int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//
//int n;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int a, b;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		cout << gcd(a, b) << '\n';
//	}
//
//	return 0;
//}
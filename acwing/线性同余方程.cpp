///*
//扩展欧几里得的应用
//步骤:
//	1.ax % m = b -> ax = my+b -> ax-my = b -> ax+my2 = b
//	2.裴蜀定理可知 ax+my = gcd(a,m) = d,若b是d的倍数则有解,不是则无解
//	3.当有解且求出x的值时,需要扩大b/d倍,并且%m
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
//int exgcd(int a, int b, int& x, int& y)
//{
//	if (!b)
//	{
//		x = 1, y = 0;
//		return a;
//	}
//	int d = exgcd(b, a % b, y, x);
//	y -= a / b * x;
//	return d;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int a, b, m,x,y;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b >> m;
//		int d = exgcd(a, m, x, y);
//		if (b % d) cout << "impossible\n";
//		else cout << (long long)x*(b/d)%m << '\n';
//	}
//
//	return 0;
//}
///*
//分类讨论
//步骤:
//	1.用一个count函数计算从0-n中x(0-9)出现的次数,那么问题就变成count(b,x)-count(a-1,x)
//	2.实现count函数
//		2-1:将n分成三部分,l,m,r.m是分界线,l是分界线左边的数字,r是分界线右边的数字
//		2-2:遍历分界线的可能位置,从0-n长度-1,
//			根据x与m的大小关系,分类讨论l的取值范围,以及r的取值范围
//			特别的当x为0时,l不能取到0,因为此时连续的前导0是不合法的.
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
//int a, b;
//
//int count(int n, int x)
//{
//	int ans = 0;
//	for (int p = 1; p <= n; p *= 10)
//	{
//		int l = n / p / 10, m = n / p % 10, r = n % p;
//		if (x > m) ans += l * p;
//		else if (x == m) ans += l * p + r + 1;
//		else ans += l * p + p;
//		if (!x) ans -= p;
//	}
//	return ans;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	while (cin >> a >> b and a and b)
//	{
//		if (a > b) swap(a, b);
//		for (int i = 0; i < 10; i++) cout << count(b, i) - count(a - 1, i)<<' ';
//		cout << '\n';
//	}
//
//	return 0;
//}
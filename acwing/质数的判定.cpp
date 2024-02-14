///*
//试除法
//步骤:
//	1.从定义出发,纯模拟算法.(一个大于1的整数仅含有1以及本身两个约数),时间复杂度O(n)
//	2.优化,若某个大于1的整数不是质数,那么它的约数是偶数个,即约数总是成对出现
//	  d<=(n/d) -> d<= n^(0.5),即最大只需要遍历到n的0.5次幂即可
//	  时间复杂度:O(n^(0.5))
//
//*/
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n;
//
//bool isprime(int x)
//{
//	if (x < 2) cout << "No\n";
//	else
//	{
//		for (int i = 2; i <= n / i; i++)
//		{
//			if (x % i == 0)
//			{
//				cout << "No\n";
//				return false;
//			}
//		}
//		cout << "Yes\n";
//		return true;
//	}
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int t;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> t;
//		isprime(t);
//	}
//
//	return 0;
//}

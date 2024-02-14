///*
//步骤:
//	1.当求解a^n时,若n的值较大,则O(n)的累乘模拟算法太慢
//	2.将n用二进制表示,那么就能将a以平方的速度递增,那么时间复杂度为O(logn)
//	3.仅累乘a的n的二进制为1的次幂,因为a为1e9,所以乘积会超出int,要用LL
//*/
//
//
//#include <iostream>
//
//using namespace std;
//typedef long long LL;
//
//const int N = 1e5 + 1;
//
//int n;
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
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int a, b, p;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b >> p;
//		cout << ebs(a, b, p)<<'\n';
//	}
//
//	return 0;
//}
///*
//知识点:容斥原理,二项式系数和,二进制数的性质
//步骤:
//	1.经典容斥原理题
//	2.容斥原理是为了避免重复计算,先不考虑重复部分,后面再对重叠部分进行排除或补充
//	3.s1us2us3 = s1+s2+s3-s1ns2-s1ns3-s2ns3+s1ns2ns3
//  4.选择所有>=1的选法等价于c(n,1)+c(n,2)+..+c(n,n) = 2^n-1
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
//const int N = 20;
//
//int n, m;
//int p[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) cin >> p[i];
//
//	int ans = 0;
//	for (int i = 1; i < 1 << m; i++)
//	{
//		int t = 1,cnt = 0;
//		for (int j = 0; j < m; j++)
//		{
//			if (i >> j & 1)
//			{
//				cnt += 1;
//				if ((LL)t * p[j] > n)
//				{
//					t = -1;
//					break;
//				}
//				t *= p[j];
//			}
//		}
//
//		if (t != -1)
//		{
//			if (cnt&1) ans += n / t;
//			else ans -= n / t;
//		}
//	}
//
//	cout << ans << '\n';
//	return 0;
//}
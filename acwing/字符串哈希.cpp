//// 步骤:
//// 1.将字符串看成一个p进制数,p通常取131或13331.(降低冲突概率,几乎不冲突)
//// 2.将字符有规律的映射到数字上,必须从1开始,因为从0开始会导致冲突,如A:0,AA:0
//// 3.将字符转成的数字位权相加得到的和,再去%Q,Q通常取2^64.得到的即为hash值
//// 4.预处理字符串的hash值的前缀和,字符串前i个字符的hash值,表示为h[i].
////   因为hash值都要对Q取余,所以不妨直接将h数组的类型设置为unsigned long long.
////   溢出相当于自动取余.
//// 5.利用前缀和来得到任意子串的hash值:
////   5-1.设子串的起始位置为L,终止位置为R,对应的前缀和分别为h[L-1],h[R]
////   5-2.数位都是从高到低,所以需要对h[L-1]与h[R]对齐,将h[L-1]低位补(R-L+1)个零
////		 具体的 h[L-1] * p^(R-L+1) 
////   5-3.最后子串的hash值 = h[R] - h[L-1] * p^(R-L+1) 
//
//#include <iostream>
//
//using namespace std;
//typedef unsigned long long ULL;
//
//const int N = 1e5 + 1, P = 131;
//
//int n, m;
//ULL h[N], p[N];
//
//ULL get(int l, int r)
//{
//	return h[r] - h[l - 1] * p[r - l + 1];
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> m;
//	string s;
//	cin >> s;
//
//	p[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		p[i] = p[i - 1] * P;
//		h[i] = h[i - 1] * P + (int)s[i - 1];
//	}
//	
//	int l1, r1, l2, r2;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> l1 >> r1 >> l2 >> r2;
//		if (get(l1, r1) == get(l2, r2)) cout << "Yes\n";
//		else cout << "No\n";
//	}
//	return 0;
//}
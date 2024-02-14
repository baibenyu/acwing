//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 2e5 + 3,null = 0x3f3f3f3f; // 1e5+3,第一个大于1e5的质数,1e6+3第一个大于1e6的质数;
////选质数是因为在mod质数时,冲突概率较低,几乎可以视作不冲突
////开放寻址法
//int n;
//int h[N];
//
//int hashX(int x)
//{
//	return ((x % N) + N) % N;
//}
//
//int findX(int x)
//{
//	int k = hashX(x);
//	for (int i = k; i <= N; i++)
//	{
//		if (h[i] == null or h[i] == x) return i;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		if (h[i] == null or h[i] == x) return i;
//	}
//	return N;
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n;
//	string op;
//	memset(h, 0x3f, sizeof(h)); // 初始化所有的链表的头结点编号为-1,便于终止遍历
//	for (int i = 0; i < n; i++)
//	{
//		cin >> op;
//		int x;
//		cin >> x;
//		int k = findX(x);
//		if (op == "I") h[k] = x;
//		else
//		{
//			if (h[k] != null) cout << "Yes" << '\n';
//			else cout << "No" << '\n';
//		}
//	}
//	return 0;
//}
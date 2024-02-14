//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 3; // 1e5+3,第一个大于1e5的质数,1e6+3第一个大于1e6的质数;
////选质数是因为在mod质数时,冲突概率较低,几乎可以视作不冲突
////拉链法
//int n,cur;
//int h[N], v[N], nt[N];
//
//int hashX(int x)
//{
//	return ((x % N) + N) % N;
//}
//
//void insertX(int x)
//{
//	int k = hashX(x);
//	v[cur] = x;
//	nt[cur] = h[k];
//	h[k] = cur;
//	cur += 1;
//}
//
//bool findX(int x)
//{
//	int k = hashX(x);
//	for (int i = h[k]; i != -1; i = nt[i])
//	{
//		if (v[i] == x) return true;
//	}
//	return false;
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n;
//	string op;
//	memset(h, -1, sizeof(h)); // 初始化所有的链表的头结点编号为-1,便于终止遍历
//	for (int i = 0; i < n; i++)
//	{
//		cin >> op;
//		int x;
//		if (op == "I")
//		{
//			cin >> x;
//			insertX(x);
//		}
//		else
//		{
//			cin >> x;
//			if (findX(x)) cout << "Yes" << '\n';
//			else cout << "No" << '\n';
//		}
//	}
//	return 0;
//}
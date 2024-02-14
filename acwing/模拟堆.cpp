//#include <iostream>
//#include <algorithm>
//#include <fstream>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n, sz;
//int h[N], ph[N], hp[N]; // 分别对应堆,插入->堆,堆->插入
//
//void heap_swap(int x, int y)
//{
//	swap(ph[hp[x]], ph[hp[y]]);
//	swap(hp[x], hp[y]);
//	swap(h[x], h[y]);
//}
//
//void down(int x)
//{
//	int t = x;
//	if (2 * x <= sz and h[t] > h[x * 2]) t = x * 2;
//	if (2 * x + 1 <= sz and h[t] > h[2 * x + 1]) t = 2 * x + 1;
//	if (x != t)
//	{
//		heap_swap(x, t);
//		down(t);
//	}
//}
//
//void up(int x)
//{
//	while (x / 2 and h[x] < h[x / 2])
//	{
//		heap_swap(x, x / 2);
//		x /= 2;
//	}
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n;
//	string op;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> op;
//		int k, x;
//		if (op == "I")
//		{
//			sz += 1;
//			cin >> h[sz];
//			hp[sz] = i; // 堆中的最后一个是第i个插入的
//			ph[i] = sz; // 第i个插入的在堆中的位置是sz(最后)
//			up(sz);
//		}
//		else if (op == "PM")
//		{
//			cout << h[1] << '\n';
//		}
//		else if (op == "DM")
//		{
//			heap_swap(1, sz);
//			sz -= 1;
//			down(1);
//		}
//		else if (op == "D")
//		{
//			cin >> k;
//			heap_swap(ph[k], sz); // 先由插入->堆
//			sz -= 1;
//			up(ph[k]), down(ph[k]);
//		}
//		else
//		{
//			cin >> k >> x;
//			h[ph[k]] = x;
//			up(ph[k]), down(ph[k]);
//		}
//	}
//
//	return 0;
//}
//
//
//

///*
//经典的哈夫曼树问题
//步骤:
//	1.从堆中弹出所有数中最小的两个点
//	2.合并这两个点,并将新得到的数字加入堆中
//	3.重复1,2直至仅剩下一个数
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	priority_queue<int, vector<int>, greater<int>> minheap;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		minheap.push(a);
//	}
//
//	int res = 0;
//	while (minheap.size() > 1)
//	{
//		int a = minheap.top(); minheap.pop();
//		int b = minheap.top(); minheap.pop();
//		res += a + b;
//		minheap.push(a + b);
//	}
//	cout << res;
//	return 0;
//}
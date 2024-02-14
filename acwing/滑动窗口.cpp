//#include <iostream>
//#include <algorithm>
//#include <deque>
//using namespace std;
//
//const int N = 1e6 + 1;
//
//int n, k;
//int a[N];
//deque<int> mindq, maxdq;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) cin >> a[i];
//
//	for (int i = 0; i < n; i++) // 单调递增队列找窗口内最小值
//	{
//		if (!mindq.empty() and mindq.front() <= i - k) mindq.pop_front();
//		while (!mindq.empty() and a[i] <= a[mindq.back()]) mindq.pop_back();
//		mindq.push_back(i);
//		if (i >= k - 1) cout << a[mindq.front()] << ' '; // 窗口满之前不输出
//	}
//
//	cout << '\n';
//
//	for (int i = 0; i < n; i++) // 单调递减队列找窗口内最大值
//	{
//		if (!maxdq.empty() and maxdq.front() <= i - k) maxdq.pop_front();
//		while (!maxdq.empty() and a[i] >= a[maxdq.back()]) maxdq.pop_back();
//		maxdq.push_back(i);
//		if (i >= k - 1) cout << a[maxdq.front()] << ' ';
//	}
//
//	return 0;
//}
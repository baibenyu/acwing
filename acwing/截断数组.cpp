///*
//步骤:
//	1.
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <queue>
//
//using namespace std;
//typedef pair<int, int> PII;
//typedef unsigned long long ULL;
//
//const int N = 1e5 + 1;
//
//int n;
//long long prefix[N];
//long long ans;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int t;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> t;
//		prefix[i] = prefix[i - 1] + t;
//	}
//
//	int avg = prefix[n] / 3;
//	if (avg * 3 != prefix[n] or n < 3)
//	{
//		cout << ans;
//	}
//	else
//	{
//		queue<int> q1;
//		queue<int> q2;
//		for (int i = 1; i <= n; i++)
//		{
//			if (prefix[i] == avg and i <= n - 2) q1.push(i);
//			if (prefix[i] == 2 * avg and i <= n - 1) q2.push(i);
//		}
//
//		while (!q1.empty())
//		{
//			int cur1 = q1.front();
//			q1.pop();
//			int cur2;
//			while (!q2.empty())
//			{
//				cur2 = q2.front();
//				if (cur2 > cur1)
//				{
//					ans += q2.size();
//					break;
//				}
//				q2.pop();
//			}
//		}
//		cout << ans;
//	}
//
//
//	return 0;
//}
///*
//步骤:
//	1.将所有边根据左参数排序,这样能保证按照从小到大的顺序遍历,即左参数不会影响边是否交叉.
//	2.排序后我们发现若要满足题目中的边不交叉,那么右参数的值是单调递增的
//	且无需连续递增,即可以是序列,此时问题转化成求右参数的最长上升子序列
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//typedef long long LL;
//typedef pair<int, int> PII;
//typedef unsigned long long ULL;
//
//const int N = 5001;
//
//int n;
//int f[N];
//PII cp[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> cp[i].first >> cp[i].second;
//	sort(cp + 1, cp + n + 1);
//	int res = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = 1;
//		for (int j = 1; j < i; j++)
//		{
//			if (cp[j].second < cp[i].second) f[i] = max(f[i], f[j] + 1);
//		}
//		res = max(res, f[i]);
//	}
//
//	cout << res << '\n';
//
//	return 0;
//}
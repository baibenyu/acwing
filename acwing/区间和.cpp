//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//typedef pair<int, int> PII;
//
//const int N = 3e5 + 1;
//
//int n, m;
//int a[N], s[N];
//
//vector<int> alls;
//vector<PII> adds, querys;
//
//int find_discrete(int target) // 原坐标到离散坐标的映射
//{
//	int l = 0, r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = (l + r) >> 1;
//		if (alls[mid] >= target) r = mid;
//		else l = mid + 1;
//	}
//	return r + 1; // 前缀和数组从1开始,所以要加1
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	int x, c;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x >> c;
//		alls.push_back(x);
//		adds.push_back({ x,c });
//	}
//
//	int l, r;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> l >> r;
//		alls.push_back(l);
//		alls.push_back(r);
//		querys.push_back({ l,r });
//	}
//
//	sort(alls.begin(), alls.end());
//	alls.erase(unique(alls.begin(), alls.end()), alls.end()); //排序并去重
//
//	for (vector<PII>::iterator it = adds.begin(); it != adds.end(); it++) // 对离散后的数组操作
//	{
//		a[find_discrete(it->first)] += it->second;
//	}
//
//	for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i]; //前缀和
//
//	for (vector<PII>::iterator it = querys.begin(); it != querys.end(); it++)
//	{
//		int l = find_discrete(it->first), r = find_discrete(it->second);
//		cout << s[r] - s[l - 1] << '\n';
//	}
//	return 0;
//}
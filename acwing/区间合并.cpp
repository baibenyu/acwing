//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//typedef pair<int, int> PII;
//
//const int N = 1e5 + 1;
//
//int n,cnt;
//PII a[N];
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
//	sort(a, a + n);
//
//	int l = -1e9, r = -1e9;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i].first > r)
//		{
//			l = a[i].first, r = a[i].second;
//			cnt += 1;
//		}
//		else r = max(r, a[i].second);
//	}
//	cout << cnt;
//
//	return 0;
//}
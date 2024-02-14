///*
//步骤:
//	1.每个区间应该尽可能的覆盖线段区间,所以在满足左边小于等于s的情况下,右边要尽可能大
//	2.根据区间的左端点排序
//	3.遍历所有左端点小于等于s的区间,取右端点最大的区间,将s更新为右端点的值
//	4.重复3直至线段被覆盖或者区间断层或者区间用完了但还没覆盖完
//*/
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n,s,t;
//pair<int, int> nums[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> s >> t;
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> nums[i].first >> nums[i].second;
//	sort(nums, nums + n);
//
//	int res = 0;
//	bool flag = false;
//	for (int i = 0; i < n; i++)
//	{
//		int maxright = -1e9;
//		while (i < n and nums[i].first <= s)
//		{
//			maxright = max(maxright, nums[i].second);
//			i += 1;
//		}
//		if (maxright < s) break; //断层
//		res += 1;
//		if (maxright >= t) // 成功
//		{
//			flag = true;
//			break;
//		}
//		s = maxright;
//	}
//
//	if (flag) cout << res;
//	else cout << "-1";
//	return 0;
//}
///*
//步骤:
//1.每个点满足应该尽可能多的区间, 且刚好满足该区间(即在端点处)
//2.根据区间的右端点排序
//3.尝试依次在区间的右端点放置, 如果该区间已经有点了,
//  跳到下一个区间继续判断, 直至碰到还没有放置点的区间
//4.重复3直至所有区间都含有点
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
//int n;
//pair<int, int> nums[N];
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> nums[i].second >> nums[i].first;
//	sort(nums, nums + n);
//	int res = 1;
//	int right = nums[0].first;
//	for (int i = 1; i < n; i++)
//	{
//		if (nums[i].second > right)
//		{
//			res += 1;
//			right = nums[i].first;
//		}
//	}
//
//	cout << res;
//	return 0;
//}
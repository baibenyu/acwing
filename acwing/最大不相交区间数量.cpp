///*
//步骤:
//	1.若要使得区间数量最多,那么每个区间应该尽可能的小,右端点才能决定长度的终点
//	2.根据右端点从小到大排序
//	3.遍历所有区间,如果区间的左端点大于此时的右端点,更新右端点为这个区间对应的右端点,
//	  并且区间数加一,如果小于就无视
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
//	for (int i = 0; i < n; i++) cin >> nums[i].first >> nums[i].second;
//
//	int res = 1;
//	int right = nums[0].second;
//	for (int i = 1; i < n; i++)
//	{
//		if (nums[i].first > right) right = nums[i].second,res += 1;
//	}
//
//	cout << res;
//	return 0;
//}
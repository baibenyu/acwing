///*
//步骤:
//	1.每个组应该尽可能包含更多的区间,这意味组中区间的空隙必须尽可能小
//	2.根据区间的左端点排序
//	3.遍历所有组的最右端
//	  如果当前区间左端点小于最右端,说明重叠,必须新建组
//	  如果只大于一个组的右端点那么就接在这个组后面,并更新右端点
//	  如果大于多个组的右端点,选取距离最短的接在后面
//	4.重复3直至所有区间都被加入组中
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//const int N = 1e5 + 1,INF = 1e9;
//
//int n;
//pair<int, int> nums[N];
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> nums[i].first >> nums[i].second;
//	sort(nums, nums + n);
//
//	priority_queue<int,vector<int>,greater<int>> Ends;
//	Ends.push(nums[0].second);
//	for (int i = 1; i < n; i++)
//	{
//		if (nums[i].first > Ends.top()) Ends.pop();
//		Ends.push(nums[i].second);
//	}
//
//	cout << Ends.size();
//	return 0;
//}
///*
//步骤:
//	1.先手必胜:能通过操作使得状态变为先手必败
//	2.先手必败:任何操作都只能使得状态变为先手必胜
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
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	int res = 0;
//	int t;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> t;
//		if (i&1)res ^= t;
//	}
//	if (res) cout << "Yes\n";
//	else cout << "No\n";
//	return 0;
//}
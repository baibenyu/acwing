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
//
//using namespace std;
//typedef pair<int, int> PII;
//typedef unsigned long long ULL;
//
//const int N = 1e5 + 1;
//
//int n, t, cnt;
//int ans[201];
//string s;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		cin >> s;
//		bool flag = false;
//		for (int i = 0; i < 2; i++)
//		{
//			string temp = s;
//			bool flag2 = true;
//			cnt = 0;
//			if (i == 1)
//			{
//				temp[0] = (temp[0] == 'B' ? 'W' : 'B');
//				temp[1] = (temp[1] == 'B' ? 'W' : 'B');
//				ans[cnt++] = 0;
//			}
//
//			char color = temp[0];
//			for (int j = 1; j < temp.size() - 1; j++)
//			{
//				if (temp[j] != color)
//				{
//					ans[cnt++] = j;
//					temp[j] = (temp[j] == 'B' ? 'W' : 'B');
//					temp[j + 1] = (temp[j + 1] == 'B' ? 'W' : 'B');
//				}
//			}
//
//			for (int j = 0; j < temp.size(); j++)
//			{
//				if (temp[j] != color)
//				{
//					flag2 = false;
//					break;
//				}
//			}
//
//			if (flag2)
//			{
//				flag = true;
//				cout << cnt << '\n';
//				if (cnt)
//				{
//					for (int j = 0; j < cnt; j++)
//					{
//						cout << ans[j] << ' ';
//					}
//					cout << '\n';
//				}
//				break;
//			}
//		}
//		if (!flag) cout << -1 << '\n';
//	}
//
//	return 0;
//}
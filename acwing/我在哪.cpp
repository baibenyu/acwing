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
//#include <unordered_map>
//
//using namespace std;
//typedef pair<int, int> PII;
//typedef unsigned long long ULL;
//
//const int N = 1e5 + 1;
//unordered_map<string, int> um;
//int n;
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	string s;
//	cin >> s;
//
//	for (int i = 1; i <= s.size(); i++)
//	{
//		bool flag = true;
//		for (int j = 0; j <= s.size() - i; j++)
//		{
//			um[s.substr(j, i)] += 1;
//		}
//
//		for (auto& t : um)
//		{
//			if (t.second != 1)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << i;
//			break;
//		}
//		um.clear();
//	}
//
//
//	return 0;
//}
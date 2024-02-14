//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//#include <string>
//using namespace std;
//const int N = 1e5 + 1;
//
//string s;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	getline(cin, s);
//	unordered_map<int, int> isexist;
//	int res = -1e9;
//	for (int i = 0, j = 0; i < s.size() and j < s.size(); j++)
//	{
//		while (isexist[(int)s[j]] > 0)
//		{
//			isexist[(int)s[i]] -= 1;
//			i += 1;
//		}
//		isexist[(int)s[j]] += 1;
//		res = max(res, j - i + 1);
//	}
//	cout << (res != -1e9 ? res : 0);
//	return 0;
//}
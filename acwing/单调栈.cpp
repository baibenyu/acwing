//#include <iostream>
//#include <algorithm>
//#include <stack>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n;
//stack<int> s;
//
//int main()//找左边最近的小于本身的数
//{
//	ios::sync_with_stdio(false);
//	cin >> n;
//	int temp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		while (!s.empty() and temp <= s.top()) s.pop(); //单调递增栈
//		if (s.empty()) cout << -1 << ' ';
//		else cout << s.top() << ' ';
//		s.push(temp);
//	}
//	return 0;
//}
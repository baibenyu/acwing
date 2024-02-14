//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int m,top;
//int stack[N];
//
//void push(int x)
//{
//	stack[top++] = x;
//}
//
//void pop()
//{
//	top -= 1;
//}
//
//bool empty()
//{
//	return top == 0;
//}
//
//int query()
//{
//	return stack[top - 1];
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> m;
//	string s;
//	int x;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> s;
//		if (s == "push")
//		{
//			cin >> x;
//			push(x);
//		}
//		else if (s == "query")
//		{
//			cout << query() << '\n';
//		}
//		else if (s == "pop")
//		{
//			pop();
//		}
//		else
//		{
//			if (empty()) cout << "YES"<<'\n';
//			else cout << "NO"<<'\n';
//		}
//	}
//	return 0;
//}
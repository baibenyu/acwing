//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int m,front,back;
//int queue[N];
//
//void push(int x)
//{
//	queue[back++] = x;
//}
//
//void pop()
//{
//	front += 1;
//}
//
//bool empty()
//{
//	return front == back;
//}
//
//int query()
//{
//	return queue[front];
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
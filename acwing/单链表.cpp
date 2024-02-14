//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 1;
//
//int m;
//int head, cur;
//int values[N], nexts[N];
//
//void init()
//{
//	head = -1;
//	cur = 0;
//}
//
//void insert_to_head(int x)
//{
//	values[cur] = x, nexts[cur] = head, head = cur, cur += 1; //此处保证了nexts最后一个结点为-1
//}
//
//void delete_next_node(int k)
//{
//	nexts[k] = nexts[nexts[k]];
//}
//
//void insert(int k, int x)
//{
//	values[cur] = x, nexts[cur] = nexts[k], nexts[k] = cur, cur += 1;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> m;
//	char s;
//	int x, k;
//	init();
//	for (int i = 0; i < m; i++)
//	{
//		cin >> s;
//		if (s == 'H')
//		{
//			cin >> x;
//			insert_to_head(x);
//		}
//		else if (s == 'D')
//		{
//			cin >> k;
//			if (!k) head = nexts[head]; // 头结点
//			else delete_next_node(k-1);
//		}
//		else
//		{
//			cin >> k >> x;
//			insert(k-1, x);
//		}
//	}
//
//
//	for (int i = head; i != -1; i = nexts[i]) cout << values[i];
//	return 0;
//}
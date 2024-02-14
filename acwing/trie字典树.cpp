//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//const int N = 3e6 + 1;
//
//int t, n, q, cur;
//int trie[N][62], pas[N];
//
//int transfer(char c)
//{
//	if ('0' <= c and c <= '9') return c - '0';
//	else if ('A' <= c and c <= 'Z') return c - 'A' + 10;
//	else return c - 'a' + 36;
//}
//
//
//void insert_word(string s)
//{
//	int p = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		int number = transfer(s[i]);
//		if (!trie[p][number]) trie[p][number] = ++cur;
//		p = trie[p][number];
//		pas[p] += 1;
//	}
//}
//
//int query(string s)
//{
//	int p = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		int number = transfer(s[i]);
//		if (!trie[p][number]) return 0;
//		p = trie[p][number];
//	}
//	return pas[p];
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> t;
//	string s;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> n >> q;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> s;
//			insert_word(s);
//		}
//		for (int j = 0; j < q; j++)
//		{
//			cin >> s;
//			cout <<query(s) << '\n';
//		}
//
//		for (int i = 0; i <= cur; i++) // 重置字典树,把所有结点经过数清空,以及删除所有结点
//		{
//			pas[i] = 0;
//			for (int j = 0; j <= 62; j++)
//			{
//				trie[i][j] = 0;
//			}
//		}
//		cur = 0;
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int m, cur,head,tail;
//int v[N], n[N], p[N];
//
//void init()
//{
//	head = 0, tail = 1;
//	n[head] = tail, p[tail] = head;
//	p[head] = tail, n[tail] = head;
//	cur = 2;
//}
//
//void insert(int k, int x) // 在第k个结点后插入一个结点
//{
//	v[cur] = x;
//	n[cur] = n[k], p[n[k]] = cur, p[cur] = k, n[k] = cur;
//	cur += 1;
//}
//
//void delete_kth_node(int k)
//{
//	n[p[k]] = n[k];
//	p[n[k]] = p[k];
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> m;
//	char one, two;
//	int x, k;
//	init();
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> one;
//		if (one == 'L')
//		{
//			cin >> x;
//			insert(head, x);
//		}
//		else if (one == 'R')
//		{
//			cin >> x;
//			insert(p[tail], x); 
//		}
//		else if (one == 'D')
//		{
//			cin >> k;
//			delete_kth_node(k+1);
//		}
//		else
//		{
//			cin >> two;
//			cin >> k >> x; // k个结点对应的下标是k-1,但是引入了0,1号结点作为虚拟头尾结点,所以查询值必须加2,即k-1+2 = k+1
//			if (two == 'L') insert(p[k + 1], x);// 必须要用p[k+1]来表示第k个结点的前一个结点,而不是对k+1本身进行加1或减一的操作
//			else insert(k + 1, x);
//		}
//	}
//
//	for (int i = n[head]; i != tail; i = n[i])
//	{
//		cout << v[i];
//	}
//	return 0;
//}
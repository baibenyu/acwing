//
///*
//步骤:
//	 思路:首先暴力O(n^2),超时;
//优化,内层循环是在找与已确定的外层循环的数异或最大的数什么情况下异或最大?
//二进制下每一位都不同时最大.所以就尝试在其它的数字中找到每一位都尽可能不同的数字而这些数字可以被字典树分类,从高到底逐位分流,根据01字符串中每位二进制是0还是1分开
//根据以上推论,会发现应该将所有数字都先插入字典树,再针对每一个数字找最大异或对中的另一个数;
//但是具体代码实现中,是边插入边查找,即有的数字并没有在全集合中找到对于它本身而言的最大异或对,但仍然是正确的,为什么呢?
//因为异或由两个数共同完成,假设当前数值是最大异或对中的一个数,那么另一个数值要么在前面已经插入,即可以找到最大异或值
//要么等到后面遍历到那个数时,当前值也已经插入字典树中了,也可以得到最大异或值
//
//*/
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 1,M = 3e6+1;
//
//int n,cur,res = -1e9;
//int a[N],trie[M][2];
//
//void insert_word(int x)
//{
//	int p = 0;
//	for (int i = 30; i >= 0; i--)
//	{
//		int y = x >> i & 1;
//		if (!trie[p][y]) trie[p][y] = ++cur;
//		p = trie[p][y];
//	}
//}
//
//int query(int x)
//{
//	int p = 0,num = 0; // 根据集合筛选下来尽可能大的数字本身
//	for (int i = 30; i >= 0; i--)
//	{
//		int y = x >> i & 1;
//		if (trie[p][!y]) // 能走相反路就走相反路,因为异或是不同为1
//		{
//			p = trie[p][!y];
//			num = num * 2 + !y; // 加权法求十进制
//		}
//		else
//		{
//			p = trie[p][y];
//			num = num * 2 + y;
//		}
//	}
//	return num;
//}
//
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < n; i++)
//	{
//		insert_word(a[i]);
//		int maxnum = query(a[i]);
//		res = max(res, a[i] ^ maxnum);
//	}
//	cout << res;
//
//	return 0;
//}
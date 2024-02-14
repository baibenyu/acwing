//// 步骤:
//// 1.思考朴素解法,尝试对每一个格子都进行选择放与不放,需要用四个变量数组分别标记行,列,对角线,反对角线上是否能放置
////   那么总时间复杂度就是O(n*2^n),因为数据量较小,如此高的时间复杂度也能通过,但是可以优化
//// 2.因为题目要求同行不能放置两个棋子,所以我们一行只放置一个,放置后直接进入下一行尝试.
////   那么就无需记录行的情况,因为遍历方式就决定了不会出现一行两个.
//// 3.在记录对角线的时候,用行-列会出现负数,但是数组索引无负数,所以要加上n
//// 
////
//#include <iostream>
//
//using namespace std;
//
//const int N = 101;
//
//int n, cnt;
//int ans[N];
//bool col[N], dg[N], udg[N];
//
//void dfs(int k)
//{
//	if (k == n)
//	{
//		if (cnt < 3)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				cout << ans[i] << ' ';
//			}
//			cout << '\n';
//		}
//		cnt += 1;
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!col[i] and !dg[k + i] and !udg[k - i + n])
//		{
//			ans[k] = i;
//			col[i] = dg[k + i] = udg[k - i + n] = true;
//			dfs(k + 1);
//			col[i] = dg[k + i] = udg[k - i + n] = false;
//		}
//	}
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//	dfs(0);
//	cout << cnt;
//	return 0;
//}
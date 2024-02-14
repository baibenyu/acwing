//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//const int N = 1e6 + 1;
//
//string s1, s2;
//int nexts[N];
//
//// 条件:在匹配串中找模式串,字符串下标为0起始
//// 如果不把下标从1开始,那么在第一个s[1]与s[0]的比较过程中不相等的话会出现j = nexts[-1],处理起来较为麻烦,所以在两个字符串前加空格
//// 下标为1在for循环中通常用=号,但是代码中我使用size来获取字符串长度,因为前面对字符串进行了加空格操作,所以长度变为原长度+1,所以直接用小于号就行了
//// nexts[0] = nexts[1] = 0,因为空字符串以及原字符串是不被计入前缀和后缀的最大匹配长度的,必须不是字符串本身,即至少起始下标为2
//// j不仅表示最大匹配长度还表示当前匹配下标的前一位(因为对字符串进行了加空格,若不加空格则刚好等于当前匹配下标)
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	cin >> s1 >> s2;
//	s1.insert(s1.begin(), ' '), s2.insert(s2.begin(), ' ');
//
//	for (int i = 2, j = 0; i < s2.size(); i++)
//	{
//		while (j and s2[i] != s2[j + 1]) j = nexts[j];
//		if (s2[i] == s2[j + 1]) j += 1;
//		nexts[i] = j;
//	}
//
//	for (int i = 1, j = 0; i < s1.size(); i++)
//	{
//		while (j and s1[i] != s2[j + 1]) j = nexts[j];
//		if (s1[i] == s2[j + 1]) j += 1;
//		if (j == s2.size() - 1)
//		{
//			cout << i - (s2.size() - 1) + 1 << '\n';
//			j = nexts[j]; // 匹配成功后与失败是一样处理,从最近的可能成功的地方重新开始匹配
//		}
//	}
//
//	for (int i = 1; i < s2.size(); i++) cout << nexts[i] << ' ';
//	return 0;
//}
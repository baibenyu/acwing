//#include <iostream>
//using namespace std;
//const int N = 5e6 + 1;
//
//int n, k;
//int a[N];
//// 求第k小的数(不忽略重复数据).即求解的是数组排好序(升序)后下标的第k个数,而不是逻辑上第k小的数\
//// 求逻辑第k小(忽略重复数据),要在读取数据时去重(用数组标记某个数是否出现),然后复用这个方法
//
//int quick_sort(int a[], int l, int r, int k)
//{
//	if (l == r) return a[l]; // 遗忘1次
//	int i = l - 1, j = r + 1, pivot = rand() % (r - l + 1) + l; // 遗忘1次,随机化选取基准值
//	int x = a[pivot];
//	while (i < j)
//	{
//		do i += 1; while (a[i] < x);
//		do j -= 1; while (a[j] > x);
//		if (i < j) swap(a[i], a[j]);
//	}
//	int pos = j - l + 1; // 左边区间的数字的个数
//	if (pos >= k) return quick_sort(a, l, j, k);
//	else return quick_sort(a, j + 1, r, k - pos); // 因为在递归过程中求解的是相对位置
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	cout << quick_sort(a, 0, n - 1, k + 1); // 加1是因为题目要求最小k为0,一般k最小为1的情况下无需加1
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//const int N = 1e5 + 1;
//
//int n;
//int a[N];
//
//void quick_sort(int a[], int l, int r)
//{
//	if (l >= r) return; // 遗忘1次
//	int i = l - 1, j = r + 1, pivot = rand() % (r - l + 1) + l; // 遗忘1次,随机化选取基准值
//	int x = a[pivot];
//	while (i < j)
//	{
//		do i += 1; while (a[i] < x);
//		do j -= 1; while (a[j] > x);
//		if (i < j) swap(a[i], a[j]);
//	}
//	quick_sort(a, l, j);
//	quick_sort(a, j + 1, r);
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	quick_sort(a, 0, n - 1);
//	for (int i = 0; i < n; i++) cout << a[i] << ' ';
//	return 0;
//}
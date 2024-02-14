//#include <iostream>
//using namespace std;
//const int N = 5e5 + 1;
//
//int n;
//long long res;
//int a[N], temp[N];
//
//void merge_sort(int a[], int l, int r)
//{
//	if (l >= r) return;
//	int mid = (l + r) >> 1;
//	merge_sort(a, l, mid);
//	merge_sort(a, mid + 1, r);
//
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid and j <= r)
//	{
//		if (a[i] <= a[j]) temp[k++] = a[i++];
//		else temp[k++] = a[j++], res += mid - i + 1; // 此处统计逆序对
//	}
//	while (i <= mid) temp[k++] = a[i++];
//	while (j <= r) temp[k++] = a[j++];
//
//	for (int i = l, j = 0; i <= r; i++, j++) a[i] = temp[j];
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	merge_sort(a, 0, n - 1);
//	cout << res;
//	return 0;
//}
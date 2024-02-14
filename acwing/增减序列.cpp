//#include <iostream>
//#include <numeric>
//#include <math.h>
//using namespace std;
//typedef long long LL;
//const int N = 1e5 + 1;
//
//int a[N], b[N + 1];
//int n;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		if (i == 0) b[i] = a[i];
//		else b[i] = a[i] - a[i - 1];
//	}
//	b[n] = 0;
//
//	LL positive = 0, negative = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (b[i] > 0) positive += b[i];
//		else negative -= b[i];
//	}
//
//	cout << (LL)max(positive, negative) << '\n';
//	cout << (LL)abs(positive - negative) + 1 << '\n';
//	return 0;
//}
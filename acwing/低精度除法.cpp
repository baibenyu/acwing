//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//
//string a;
//int b;
//vector<int>A;
//
//
////低精度除法
//vector<int> div(vector<int>& A, int b, long long& r)
//{
//	vector<int>C;
//	r = 0; //r的值可以等于b的10倍,超出int范围
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		r = r * 10 + A[i];
//		C.push_back(r / b);
//		r %= b;
//	}
//	reverse(C.begin(), C.end());
//	while (C.size() > 1 and C.back() == 0) C.pop_back();
//	return C;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0'); //逆序存储
//
//	long long r = 0;
//	vector<int>C = div(A, b, r);
//
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	return 0;
//}
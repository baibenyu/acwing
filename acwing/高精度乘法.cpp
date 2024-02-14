//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//
//string a, b;
//vector<int>A, B;
//
////通过高精度加法+低精度乘法->高精度乘法
//
//vector<int> add(vector<int>& A, vector<int>& B)
//{
//	vector<int>C;
//	int carry = 0;
//	for (int i = 0; i < A.size() or i < B.size(); i++)
//	{
//		carry += i < A.size() ? A[i] : 0; // 位数不够加0
//		carry += i < B.size() ? B[i] : 0;
//		C.push_back(carry % 10);
//		carry /= 10;
//	}
//	if (carry) C.push_back(carry); // 处理最高位进位
//	return C;
//}
//
////低精度乘法
//vector<int> mul(vector<int>& A, int b, int count)
//{
//	vector<int>C;
//	for (int i = 0; i < count; i++) C.push_back(0);// 每次位数都增加,而b的值只在int范围,所以要在数组中补0
//	int carry = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		carry += A[i] * b;
//		C.push_back(carry % 10);
//		carry /= 10;
//	}
//	while (carry) // 处理进位
//	{
//		C.push_back(carry % 10);
//		carry /= 10;
//	}
//	return C;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0'); //逆序存储
//	for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//
//	vector<int>C, temp;
//	for (int i = 0; i < B.size(); i++)
//	{
//		temp = mul(A, B[i], i);
//		C = add(C, temp);
//	}
//
//	while (C.size() > 1 and C.back() == 0) C.pop_back();// 当有一方为0时,需要处理前导0
//
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	return 0;
//}
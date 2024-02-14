//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//
//string a, b;
//vector<int>A, B;
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
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0'); //逆序存储
//	for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//
//	vector<int>C = add(A, B);
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	return 0;
//}
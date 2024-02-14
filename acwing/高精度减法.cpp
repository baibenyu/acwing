//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//
//string a, b;
//vector<int>A, B;
//
//
//bool cmp(vector<int>& A, vector<int>& B) // A>=B 
//{
//	if (A.size() > B.size()) return true;
//	else if (B.size() > A.size()) return false;
//	else
//	{
//		for (int i = A.size() - 1; i >= 0; i--) // 逆序存储,所以高位开始比较
//		{
//			if (A[i] != B[i]) return A[i] > B[i];
//		}
//		return true;
//	}
//
//}
//
//vector<int> sub(vector<int>& A, vector<int>& B)
//{
//	vector<int>C;
//	int carry = 0; // 当前位置的值
//
//	for (int i = 0; i < A.size(); i++)
//	{
//		carry = A[i] - carry;
//		carry -= i < B.size() ? B[i] : 0;
//		C.push_back((carry + 10) % 10); // 加10,处理借位
//		if (carry < 0) carry = 1; // 小于0需要借位
//		else carry = 0;
//	}
//
//	while (C.size() > 1 and C[C.size() - 1] == 0) C.pop_back(); // 处理前导0
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
//	if (cmp(A, B))
//	{
//		vector<int>C = sub(A, B);
//		for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	}
//	else
//	{
//		cout << '-';
//		vector<int>C = sub(B, A);
//		for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	}
//	return 0;
//}
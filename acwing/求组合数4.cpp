///*
//知识点:组合数的公式,分解质因数,线性筛求质数,求阶乘中质因数的幂,高精度乘法
//步骤:
//	1.根据组合数C(a,b) = a!/b!/(a-b)!
//	2.直接计算阶乘数字太大,既然公式中有除法,且任意的合数都能分解成若干质因数乘积
//	  可以先计算出a!,b!,(a-b)!分别分解质因数,然后约掉质因数,再对剩下的质因数求乘积
//	4.a!的某个质因子p的幂 = (a/p+a/p^2+a/p^3...)
//
//*/
//
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//const int N = 5001;
//
//int cnt;
//int primes[N], counts[N];
//bool flag[N];
//vector<int> A;
//
//void getprimes(int a)
//{
//	for (int i = 2; i <= a; i++)
//	{
//		if (!flag[i]) primes[cnt++] = i;
//		for (int j = 0; primes[j] <= a / i; j++)
//		{
//			flag[i * primes[j]] = true;
//			if (i % primes[j] == 0) break;
//		}
//	}
//}
//
//int getindex(int a, int p)
//{
//	int res = 0;
//	while (a)  
//	{
//		a /= p;
//		res += a;
//	}
//	return res;
//}
//
//vector<int> mul(vector<int> A, int b)
//{
//	vector<int>C;
//	int carry = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		carry += A[i] * b;
//		C.push_back(carry % 10);
//		carry /= 10;
//	}
//	while (carry)
//	{
//		C.push_back(carry % 10);
//		carry /= 10;
//	}
//	return C;
//}
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	int a, b;
//	cin >> a >> b;
//	getprimes(N);
//	A.push_back(1);
//	for (int i = 0; i < cnt; i++)
//	{
//		counts[i] = getindex(a, primes[i]) - getindex(b, primes[i]) - getindex(a - b, primes[i]);
//		for (int j = 0; j < counts[i]; j++) A = mul(A, primes[i]);
//	}
//
//	for (int i = A.size() - 1; i >= 0; i--) cout << A[i];
//	return 0;
//}
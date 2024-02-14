///*
//步骤:
//	1.保留n位小数,往往在while范围判断时,多计算两位.即精度应该精确到n+2位
//*/
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//double n;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n;
//	double l = 0, r = n;
//	while (l < r - 1e-8)
//	{
//		double mid = (l + r) / 2;
//		if (mid * mid * mid >= n) r = mid;
//		else l = mid;
//	}
//	cout <<fixed<<setprecision(6)<< l << '\n';
//	return 0;
//}
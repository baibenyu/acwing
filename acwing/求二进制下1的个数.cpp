//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 1;
//
//int n;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin >> n;
//	int temp,count;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		count = 0;
//		while (temp > 0)
//		{
//			//temp &= (temp - 1); //去掉末尾的1
//			temp -= temp & (-temp); //得到末尾的1以及后续的0
//			count += 1;
//		}
//		cout << count << ' ';
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <fstream>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n, m, sz;
//int heap[N];
//
//void down(int x)
//{
//	int t = x;
//	if (2 * x <= sz and heap[t] > heap[x * 2]) t = x * 2;
//	if (2 * x + 1 <= sz and heap[t] > heap[2 * x + 1]) t = 2 * x + 1;
//	if (x != t)
//	{
//		swap(heap[x], heap[t]);
//		down(t);
//	}
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//
//	ifstream in(R"(C:\Users\baibe\source\repos\acwing\acwing\RandomData.txt)");
//
//	// Open the output file
//	ofstream out("C:\\Users\\baibe\\source\\repos\\acwing\\acwing\\data1.txt");
//
//	in >> n >> m;
//	sz = n;
//	for (int i = 1; i <= n; i++) in >> heap[i];
//	for (int i = n / 2; i; i--) down(i); // 从倒数第二层开始向下建堆,趋近于O(N),若一个一个插入则是O(nlogn)
//
//	for (int i = 1; i <= m; i++)
//	{
//		out << heap[1] << ' ';
//		heap[1] = heap[sz]; // 逻辑上删除堆中的最小值
//		sz -= 1;
//		down(1);
//	}
//
//	// Close the input and output files
//	in.close();
//	out.close();
//
//	return 0;
//}
//
//
//

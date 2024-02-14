///*
//裴蜀定理:
//若a,b是整数,且gcd(a,b)=d，那么对于任意的整数x,y,ax+by都一定是d的倍数
//特别地，一定存在整数x,y，使ax+by=d成立。
//
//重要推论：a,b互质的充分必要条件是存在整数x,y使ax+by=1.
//步骤:
//	1.根据裴蜀定理可知,一定有解
//	2.b!=0,在用欧几里得算法的过程中,a变成了b,b变成了a%b=a-a/b*b,
//	  那么公式即为bx2+(a%b)y2 = bx2+(a-a/b*b)y2 = ay2+b(x2-a/b*y2) = exgcd(a,b) = ax+by
//	  所以x = y2,y = x2-a/b*y2,因此在递归过程中要交换x,y的值,并修改y的值
//	3.b=0时,最大公约数为a,即ax+by = a,此时可设y = 0,那么x=1;
//
//*/
//
//
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 1;
//
//int n;
//
//int exgcd(int a, int b, int& x, int& y)
//{
//	if (!b)
//	{
//		x = 1, y = 0;
//		return a;
//	}
//	int d = exgcd(b, a % b, y, x);
//	y -= a / b * x;
//	return d;
//}
//
//
//int main()
//{
//	cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);
//	cin >> n;
//
//	int a, b, x = 0, y = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		exgcd(a, b, x, y);
//		cout << x << ' ' << y << '\n';
//	}
//
//	return 0;
//}
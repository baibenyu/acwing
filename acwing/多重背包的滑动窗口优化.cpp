//#include <iostream>
//
//using namespace std;
//
//const int N = 1010, M = 20010;
//
//int n, m;
//int v[N], w[N], s[N];
//int f[N][M];
//int q[M];
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) cin >> v[i] >> w[i] >> s[i];
//    for (int i = 1; i <= n; ++i)
//    {
//        for (int r = 0; r < v[i]; ++r)
//        {
//            int hh = 0, tt = -1;
//            for (int j = r; j <= m; j += v[i])
//            {
//                while (hh <= tt && j - q[hh] > s[i] * v[i]) hh++;
//                while (hh <= tt && f[i - 1][q[tt]] + (j - q[tt]) / v[i] * w[i] <= f[i - 1][j]) --tt;
//                q[++tt] = j;
//                f[i][j] = f[i - 1][q[hh]] + (j - q[hh]) / v[i] * w[i];
//            }
//        }
//    }
//    cout << f[n][m] << endl;
//    return 0;
//}

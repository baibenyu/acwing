#include <iostream>
#include <math.h>

using namespace std;

typedef long long LL;
int n;
LL gcd(LL a, LL b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    LL fz, fm;
    LL rfz = 0, rfm = 0;
    string s;
    bool flag;
    while (n--)
    {
        cin >> s;
        flag = false;
        fz = 0, fm = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '/') flag = true;
            else if (!flag) fz = fz * 10 + s[i] - '0';
            else fm = fm * 10 + s[i] - '0';
        }

        if (rfm == 0) rfm = fm, rfz = fz;
        else
        {
            rfz = rfz * (fm / gcd(rfm, fm)) + fz * (rfm / gcd(rfm, fm));
            rfm = fm * rfm / gcd(rfm, fm);
            int yue = gcd(rfz, rfm);
            rfz /= yue;
            rfm /= yue;
        }
    }
    int c = rfz / rfm;
    if (c) cout << c << ' ';
    int d = rfz - c * rfm;
    cout << d << '/' << rfm;




    return 0;
}
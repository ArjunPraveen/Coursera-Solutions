#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[n], b[n];
    double delta = double(n) / 300000.0;
    // always use delta while comparing numbers after float operations
    double sum1 = 0.000, sum2 = 0.000;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        sum1 += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];

        sum2 += b[i];
    }

    if (abs(sum1 - sum2) < delta)
    {
        cout << "SUM(A)=SUM(B)";
    }
    else if (sum1 > sum2 + delta)
    {
        cout << "SUM(A)>SUM(B)";
    }
    else
    {
        cout << "SUM(A)<SUM(B)";
    }
}

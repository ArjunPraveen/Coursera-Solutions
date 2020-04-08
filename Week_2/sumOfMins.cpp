#include <bits/stdc++.h>
using namespace std;
int n;
int a[2000];

long long int findsum()
{
    long long int sum = 0;

    int *min;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                min = min_element(a + i, a + j + 1);
                sum += *min;
            }
        }
    }

    return sum;
}
// 3 1 2 3
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << findsum();
}
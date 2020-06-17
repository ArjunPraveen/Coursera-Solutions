#include <bits/stdc++.h>
using namespace std;

long long int knapsack(long long int W, long long int w[], long long int p[], long long int n)
{
    long long int K[n + 1][W + 1];

    for (long long int i = 0; i <= n; i++)
    {
        for (long long int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                K[i][j] = 0;
            }
            else if (w[i - 1] <= j)
            {
                K[i][j] = max(K[i - 1][j], p[i - 1] + K[i - 1][j - w[i - 1]]);
            }
            else
            {
                K[i][j] = K[i - 1][j];
            }
        }
    }

    return K[n][W];
}

int main()
{
    long long int n, W;
    cin >> n >> W;
    long long int w[n + 100], p[n + 100];

    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> p[i];
    }

    cout << knapsack(W, w, p, n);
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y;
    cin >> x >> y;

    if ((x % y == 0) || x * y < 0)
        cout << x / y << "\n";
    else
        cout << x / y + 1 << "\n";
}

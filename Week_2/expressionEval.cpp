#include <bits/stdc++.h>
using namespace std;

//warning:  this code is messy
string s;
queue<int> nums;
int i = 1;
int digits = 1;

int ten, j, num, numFinal = 0;

int getVal()
{
    j = i - digits;
    while (j != i)
    {
        ten = (int)pow(10, --digits);
        //cout << ten << "hello";
        num = ((int)s[j++] - 48) * ten;
        numFinal += num;
    }
    return numFinal;
}

long long findval()
{

    int check = 1;
    for (int m = 0; m < 7; m++)
    {
        if (s[m] == '+' || s[m] == '-')
            check = 0;
    }
    if (check)
    {
        i = 6;
        digits = 6;
        numFinal = getVal();
        return numFinal;
    }

    do
    {
        if (s[i] == '+' || s[i] == '-')
        {
            numFinal = getVal();
            //cout << numFinal << "\t";

            nums.push(numFinal);

            numFinal = 0;
        }
        else
            digits++;

    } while (s[i++] != '\0');

    int val1;
    long long sum = 0;
    s = '+' + s;
    for (int k = 0; k < i; k++)
    {

        if (s[k] == '+')
        {
            val1 = nums.front();
            nums.pop();
            sum += (long long)val1;
        }

        else if (s[k] == '-')
        {
            val1 = nums.front();
            nums.pop();
            sum -= (long long)val1;
        }
    }
    return sum;
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    cin >> s;

    s = s + '+';
    //cout << (int)s[0] - 48;
    cout << findval();
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    //cout<<a.length();
    int c=0;
    for(int i=0;i<a.length(); i++)
    {
        if(a[i]!='9')
            c=1;
    }
    int len = a.length();
    (c==1) ? cout<<len: cout<<len+1;
    
    
}


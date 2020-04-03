

#include <iostream>

using namespace std;

int main()
{
    int n,y,z;
    cin>>n;
    int a[n],max=0;
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == max)
            c++;
    }
    int k=0;
    
    if(c>=3)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]==max && k==2)
            {
                k++;continue;
            }
                
            else if((a[i]==max && k!=2) || a[i]!=max)
            {
                cout<<a[i]<<" ";
                if(a[i]==max)
                    k++;
            }
        }
        
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]==max)
                continue;
            cout<<a[i]<<" ";
        }
    }
    
    
}


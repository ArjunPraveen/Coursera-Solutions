


#include<bits/stdc++.h>

using namespace std;

int rankcard(char x, int i)
{
    if(i==1)
    {
	//cout<<" high ";
        if(x == 'K')
            return 12;
        else if (x == 'Q')
            return 11;
        else if (x == 'J')
            return 10;
	else if (x == 'T')
            return 9;
        else if (x == 'A')
            return 13;
        else
            return ((int)x - 49);
    }
    else
    {
	//cout<<" low ";
        if(x == 'K')
            return 13;
        else if (x == 'Q')
            return 12;
        else if (x == 'J')
            return 11;
	else if (x == 'T')
            return 10;
        else if (x == 'A')
            return 1;
        else
            return (int)x-48 ;
    }

}


int main()
{
    string s[5];
    for(int i=0; i<5; i++)
    {
        cin>>s[i];
        
    }
    
    //cout<<s[0][1];
    char f = s[0][1];
    int flag=1;
    
    for(int i=0; i<5; i++)
    {
	//cout<<s[i][1];    
	//cout<<(s[i][1]!=f)<<" "<<!(f=='C' || f=='S' || f=='D' || f=='H')<<endl;  
	if(s[i][1]!=f || !(f=='C' || f=='S' || f=='D' || f=='H'))
        {
            flag=0;
            break;
        }
    }
    //cout<<flag;
    int c=1;
    //a 2 3 4 5     2 4 3 5 a    9 T j q k a 
    int flag1=1;
    if(flag)
    {
        int d,pre;
	
        for(int i=1; i<5; i++)
        {
            if(s[i][0]=='5')
            {
                flag1=0;
                break;
            }
        }
        
        if(flag1!=0)
            d=1;
        else
            d=0;
        
        // for(int i=0; i<5; i++)
        // {   
            
        // }
        int a[5];
        
        for(int i=0; i<5; i++)
        {
            a[i] = rankcard(s[i][0],d);
            //cout<<a[i]<<"\t";
        }
	//cout<<endl;
        
        sort(a, a+5, greater<int>()); 
        int c=1;
        for(int i=0; i<4; i++)
        {
            if(a[i] - a[i+1] !=1)
            {
                c=0;
                break;
            }
            
        }
        if(c==0)
        {
            cout<<"NO";
        }
        else
            cout<<"YES";
        
        
    }
    else
        cout<<"NO";
}


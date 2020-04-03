

#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a=0,a1,a2,pos=0;
    if(z==0)
        cout<<0;
    else
    {
        for(int i=1; i<100000000;i++)
        {
            a1= a + x;
            a2= a1 - y;
            //cout<<a1<<" "<<a2;
            if(a1==z)
            {
                cout<<i;
                return 0;
            }
            else if(a2==z)
            {
                i++;
                cout<<i;  //++i
                return 0;
            }
            else{
                i++;
                a=a2;
            }
            //cout<<"{"<<i<<"}";
        }
        cout<<-1;
    }

    
}


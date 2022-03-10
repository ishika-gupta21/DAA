#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t,n,key;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int c=0,m=0,f=0,l=0;
        cin>>n;
        m=(int)sqrt(n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cin>>key;
        while(l<=n-1)
        {
            c++;
            if(key>= a[l] && key<a[l+m])
            {
                for(int k=l;k<l+m;k++)
                {
                    if(key==a[k])
                    {
                        f=1;
                        break;
                    }
                }
            }
            l=l+m;
        }
        if(f==1)
            cout<<"Present "<<c<<endl;
        else
            cout<<"Not Present "<<c<<endl;
    }
}

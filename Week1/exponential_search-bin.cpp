#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t,n,key;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int c=0,f=0,x=0,y=0,mid=0,l=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cin>>key;
        if(a[0]==key)
        {
            f=1;
            c++;
        }
        else
        {
            l=1;
            c++;
            while(l<n && a[l]<=key)
            {
                l=l*2;
                c++;
            }
            x=l/2;
            y=min(l,n-1);
            while(x<=y)
            {
                c++;
                mid=x+ (y-x)/2;
                if(a[mid]==key)
                {
                    f=1;
                    break;
                }
                if(a[mid]>key)
                    y=mid-1;
                else
                    x=mid+1;
            }
        }
        if(f==1)
            cout<<"Present "<<c<<endl;
        else
            cout<<"Not Present "<<c<<endl;
    }
}
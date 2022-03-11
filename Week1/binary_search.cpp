#include <iostream>
using namespace std;
int main()
{
    int t,n,key;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int c=0,l=0,u=0,mid=0,f=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cin>>key;
        u=n-1;
        while(l<=u)
        {
            c++;
            mid=l+ (u-l)/2;
            if(a[mid]==key)
            {
                f=1;
                break;
            }
            if(a[mid]>key)
                u=mid-1;
            else

                l=mid+1;
        }
        if(f==1)
            cout<<"Present "<<c<<endl;
        else
            cout<<"Not Present "<<c<<endl;
    }
}

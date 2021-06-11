#include<bits/stdc++.h>
//aaddaaddarsh ka code hai

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1]={0};
        int count[n+1]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            count[a[i]]++;
        }
        int f=0;
        int ans=-1;
        int comp=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(count[a[i]]==1 && a[i]<comp)
            {
                comp=a[i];
                ans=i;
                f=1;
            }
        }
        if(f==1)
            cout<<ans+1;
            else
                cout<<"-1";
        cout<<endl;
        cout<<endl;

    }
}

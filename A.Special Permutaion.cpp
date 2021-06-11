#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int >v;

        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        int z=n/2+1;
        if(n%2==0){
            reverse(v.begin(),v.end());
        }
        else{
            reverse(v.begin(),v.end());
            reverse(v.begin(),v.begin()+z);
        }

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";

        }
        cout<<endl;
    }

}

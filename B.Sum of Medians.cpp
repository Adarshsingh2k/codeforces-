#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int z=n*k;
        int a[z];

        for(int i=0;i<z;i++){
            cin>>a[i];
        }
        long long int sum=0;

        if(n%2){
            int cnt = 0;
            int medn= n/2;
            while(cnt!=k){
                sum=sum+a[z-medn-1];
                z=z-medn-1;
                cnt++;
            }
        }
        else{

            int cnt = 0;
            int medn= n/2+1;
            while(cnt!=k){
                sum=sum+a[z-medn];
                z=z-medn;
                cnt++;
            }

        }

        cout<<sum<<endl;
    }



return 0;
}

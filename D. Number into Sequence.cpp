#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int cnt=1;;
        for(int i=2;i<n;i++){
            if(n%i/2!=0){
                cout<<1<<end<<n<<endl;
            }
            else if(n%2!=0){
                cout<<1<<endl<<n<<endl;
            }
            else{
                if(n%i==0 ){
                        cnt++;
                cout<<cnt<<endl
                    cout<<i<<" "<<endl;
                }

            }
        }

    }
}

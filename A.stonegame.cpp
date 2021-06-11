#include <bits/stdc++.h>
using namespace std;


int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int v[n];

		int mx=INT_MIN;
		int mi=INT_MAX;
		for(auto i=0;i<n;i++){
			cin>>v[i];
			mx=max(mx,v[i]);
			mi=min(mi,v[i]);
		}


		int lmx,lmi;

		for(int i=0;i<n;i++){
			if(v[i]==mx){
				lmx=i+1;
			}

			if(v[i]==mi){
				lmi=i+1;
			}
		}

		int rmx=n-lmx+1;
		int rmi=n-lmi+1;
		int la=max(lmx,lmi);
		int ra=max(rmx,rmi);
		int bmxmi=min(lmi+rmx,lmx+rmi);

		cout<<min(bmxmi,min(la,ra))<<endl;



	}
}

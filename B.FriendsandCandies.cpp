#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int a[n];int s=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}

		//cout<<s<<endl;

		if(s%n!=0){
			cout<<"-1"<<endl;
			//break;
		}

		else{

				int dis=s/n;



			int cnt=0;


			for(int i=0;i<n;i++){
				if(a[i]>dis){
					cnt++;
				}
			}

			cout<<cnt<<endl;
		}

		
	}
}
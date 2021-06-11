#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){

		int n,l,r;
		cin>>n>>l>>r;

		vector<int> a(n);

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int start=0;
		int end=n-1;

		long long cnt=0;

		sort(a.begin(),a.end());

		/*while(start<end){
			if(a[start]+a[end]>=l and a[start]+a[end]<=r){
				cnt++;
				start++;

			}

			if(a[start]+a[end]<=l){
				start++;
			}

			else if(a[start]+a[end]>=r){
				end--;
			}
		}

		cout<<cnt<<endl;*/

		//int cnt=0;

		for(int i=0;i<n;i++){
			auto itr1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
			auto itr2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);

			cnt+=(itr2-itr1);
		}

		cout<<cnt<<endl;

	}
}

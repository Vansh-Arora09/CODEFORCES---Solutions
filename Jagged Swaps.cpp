#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
 
		vector<int> b = arr;
		sort(b.begin(),b.end());
		if(arr[0]==b[0]){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}

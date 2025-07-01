#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int N;
	cin>>N;
	while(N--){
		int n,k;
		cin>>n>>k;
		int arr[n];
 
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
 
		vector<int> b(arr,arr+n);
 
		sort(b.begin(),b.end());
		
		bool flag = true;
		
		for(int i=0;i<n;i++){
			if(arr[i]!=b[i]){
				flag=false;
				break;
			}
		}
		if(flag || k>=2){
 
			cout<<"YES"<<endl;
 
		}
		else{
			cout<<"NO"<<endl;	
		}
	}
	return 0;
}


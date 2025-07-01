#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    int m =1;
    while(m!=0){
        int cnt = 0;
        int a = n*m+1;
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                cnt++;
                break;
            }
        }
        
        if(cnt==0){
            m++;
        }
        else{
            cout<<m;
            m=0;
        }
    }
}

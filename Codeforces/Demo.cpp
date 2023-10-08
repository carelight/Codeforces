#include<bits/stdc++.h>
using namespace std;
long long n,k,q,res,ans;
int t;
int main(){
cin>>t;
while(t--){
	res=0,ans=0;
	cin>>n>>k>>q;
	for(int i=1;i<=n;i++){
		int m;
		cin>>m;
		if(m<=q)ans++; 
		else ans=0;
		if(ans>=k)res=res+(ans-k+1);
		
	}
	cout<<res<<endl;
}
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int>a(n,0);
	for(int i = 0;i < n ;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	if (a[0] != 1){
		cout<<"NO"<<endl;
		return;
	}
	unordered_map<int,int>mp;
	mp[1] ++;
	for(int i = 1 ; i<n;i++){
		if (mp[a[i]] > 1 || mp[a[i]-1] > 0 || mp[1] >= a[i]){
			mp[a[i]] ++;
			mp[1] += a[i];
			continue;
		}
		else{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	// Here i am typing in far manager
}

int main(){
	int tc = 1;
	cin>>tc;
	while (tc --){
		solve();
	}
}

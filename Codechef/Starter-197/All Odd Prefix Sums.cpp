#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int>a(n,0);
	for (int i = 0; i < n;i++){
		cin>> a[i];
	}
	int sum = accumulate(a.begin(),a.end(),0);
	if (sum % 2 == 0){
		cout<<"NO"<<endl;
		return;
	}
	int cnt = 0;
	for (int i = 0;i<n;i++){
		if (a[i] % 2){
			cnt += 1;
		}
		if (cnt > 1){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<"\n";
}

int main(){
	int tc = 1;
	cin>>tc;
	while (tc --){
		solve();
	}
}

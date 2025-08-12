/*
	author: Ankesh
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

	int n,Q;
	cin>>n>>Q;

	vector<int>a(n,0);
	vector<int>x(Q,0);
	unordered_map<int,int>mpp;
	for (int i = 0;i<n;i++){
		cin>>a[i];
		mpp[a[i]] += 1;
	}
	for (int j = 0;j<Q;j++){
		cin>>x[j];
	}

	for (int&q:x){
		int shift = 1 << q;
		for (int k = 1;k<=;k++){
			if mpp[k * ]
		}
	}

	for (auto&it:a){
		cout<<it<<" ";
	}
	cout<<endl;
	
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll tc = 1;
	cin>>tc;
	while (tc-- ){
		solve();
	}
	return 0;
}
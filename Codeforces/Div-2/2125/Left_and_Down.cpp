#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll __hcf(ll a,ll b){
	if (b == 0){
		return a;
	}

	return __hcf(b,a%b);
}

void solve(){
	ll x,y,k;
	cin>>x>>y>>k;
	ll hcf = __hcf(x,y);
	x /= hcf;
	y /= hcf;

	if (x == y || (x <= k && y <= k)){
		cout<<1<<endl;
		return;
	}
	else{
		cout<<2<<endl;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int tc = 1;
	cin>>tc;
	while (tc --){
		solve();
	}
}
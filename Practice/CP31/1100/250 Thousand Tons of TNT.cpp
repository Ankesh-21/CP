/*
	author: Ankesh
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;

	vector<ll>a(n,0);
	for (ll it=0;it<n;it++){
		cin>>a[it];
	}
	ll ans = 0;
	for (int k = 1; k<=n; k++){

		if ( n % k != 0){
			continue;
		}

		int left = 0;
		int right = 0;
		ll sum = 0;
		ll mini = INT_MAX;
		ll maxi = INT_MIN;
		while (right < n){
			if ((right - left + 1) > k){
				left = right;
				mini = min(mini,sum);
				maxi = max(maxi,sum);
				sum = 0;
			}
			sum += a[right];
			right ++;
		}
		mini = min(mini,sum);
		maxi = max(maxi,sum);
		ans = max(ans,(ll)(maxi - mini));
	}
	cout<<ans<<endl;
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
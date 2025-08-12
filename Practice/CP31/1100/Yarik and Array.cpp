/*
	author: Ankesh
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

	int n = 0;
	cin>>n;
	vector<int>a(n,0);
	for (int i = 0;i<n;i++){
		cin>>a[i];
	}

	ll currSum = 0;
	ll maxSum = (-1) * (1e9 + 9);

	for (int i = 0;i<n;i++){
		if (i > 0 && abs(a[i-1]) % 2 == abs(a[i]) % 2){
			currSum = a[i];
		}
		else if ((currSum + a[i]) < a[i]){
			currSum = a[i];
		}
		else
			currSum += a[i];
		maxSum = max(maxSum,currSum);
	}
	cout<<maxSum<<"\n";
	
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
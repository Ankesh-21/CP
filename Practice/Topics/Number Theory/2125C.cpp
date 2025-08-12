#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll getNumbers(ll r){
	// inclusion and exclusion principle
	// divisible by 2
	ll one = (r /2) + (r / 3) + (r / 5) + (r / 7);

	// divisible by two digits
	ll two = (r / 6) + (r / 10 )+ (r/ 14) + (r / 15) + (r/21) + (r/35);
	ll three = (r / 30) + (r / 105) + (r/70) + (r/42) ;
	ll four = (r / 210);

	ll ans = one - two + three - four;

	return ans;
}
void solve(){
	ll l,r;
	cin >> l >> r;

	ll ansTill_r = getNumbers(r);
	ll ansTill_l = getNumbers(l-1);

	cout << r - ansTill_r - l + ansTill_l + 1<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int tc = 1;
	cin >> tc;
	while (tc --){
		solve();
	}
}
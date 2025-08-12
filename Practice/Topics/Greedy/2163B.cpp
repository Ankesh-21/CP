#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n,l,r;
	cin >> n >> l >> r;
	vector<int>a (n,0);
	for(int i = 0; i< n; i++){
		cin >> a[i];
	}
	
	vector<pair<int,int>>outliers;
	for(int i = 0; i< l-1; i ++){
		outliers.push_back({a[i],i});
	}
	for(int i = r ; i < n ;i++){
		outliers.push_back({a[i],i});
	}
	if (outliers.size() == 0){
		ll ans = accumulate(a.begin(),a.end(),0);
		cout<<ans<<endl;
		return;
	}
	sort(a.begin()+l-1,a.begin()+r,greater<int>());
	sort(outliers.begin(),outliers.end());
	cout<<"Outliers is: ";
	for(int i = l -1 ; i < r; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int ind = 0;
	for (int i = l-1 ; i < r;i++){
		if (ind < outliers.size() && outliers[ind].first < a[i]){
			swap(a[i],outliers[ind].first);
			ind += 1;
		}
	}
	
	ll ans = accumulate(a.begin()+l-1,a.begin()+r,0);
	cout<<ans<<endl;
}

int main(){
	// test cases
	int tc = 1;
	cin >> tc;
	while (tc --){
		solve();
	}
}

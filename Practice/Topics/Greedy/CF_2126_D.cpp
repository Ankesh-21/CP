#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	vector<vector<int>>a(n,vector<int>(3,0));
	for (int i = 0;i<n;i++){
		for (int j = 0;j<3;j++){
			cin>>a[i][j];
		}
	}
	
	sort(a.begin(),a.end());
	int ans = k;
//	for (int i =0;i<n;i++){
		for(auto&v:a){
			int li = v[0];
			int ri = v[1];
			int reali = v[2];
			
			if (ans >= li && ans <= ri && ans <= reali){
				ans = reali;
//				k = ans;
			}
			else{
				continue;
			}
		}
//	}

	cout<<ans<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while (tc --){
		solve();
	}
}

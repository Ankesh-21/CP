#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;string s;
	cin>>n;
	cin>>s;
	vector<pair<int,int>>p;
	int i = 0;
	while (i < n){
		int cnt = 0;
		int j = i;
		while (i < n && s[i] == '0'){
			cnt += 1;
			i += 1;
		}
		if (cnt > 0)
			p.push_back({0,cnt});
		cnt = 0;
		j = i;
		while (i < n && s[i] == '1'){
			cnt += 1;
			i += 1;
		}
		if (cnt > 0)
			p.push_back({1,cnt});
	}

	if (p.size() <= 2){
		cout<<n<<endl;
		return;
	}

	int ans = 0;
	ans += p[0].second + p[p.size()-1].second;
	if(p.size() % 2 == 0){
		ans ++;
	}
	cout<<ans<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while (tc --){
		solve();
	}
}
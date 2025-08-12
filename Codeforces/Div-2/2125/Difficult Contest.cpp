#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	stack<char>st;
	bool sortable = false;
	int i = 0;
	for (int j = 0 ; j < s.size(); j++){
		if ((j - i + 1) == 3){
			string temp = s.substr(i,3);
			if (temp == "FFT" || temp == "NTT"){
				sortable = true;
				break;
			}
			i += 1;
		}
	}
	if (sortable){
		sort(s.begin(),s.end(),greater<int>());
	}
	cout<<s<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int tc = 1;
	cin>>tc;
	while (tc--){
		solve();
	}
}

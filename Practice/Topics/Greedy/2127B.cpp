#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
void solve(){
	int n,x;
	cin >> n >> x;
	string s;
	cin >> s;

	x --;

	if (x == 0 || x == n-1){
		cout << 1<< endl;
		return;
	}

	int lw = -inf;
	int rw = inf;
	for (int i = x -1;i >= 0 ; i--){
		if (s[i] == '#'){
			lw = i;
			break;
		}
	}

	for (int i = x + 1;i < n ;i++){
		if (s[i] == '#'){
			rw = i;
			break;
		}
	}

	if (lw == -inf && rw == inf){
		cout << 1 << endl;
		return;
	}

	cout << max(min(x+1,n - rw + 1),min(lw + 2, n -x))<<"\n";

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int tc = 1;
	cin >> tc;

	while (tc--){
		solve();
	}
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Observation
/*
{

}
*/
void solve(){
	// Write your Code
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	// if (n == 1 && k == 1 && s[0] == '2'){
	// 	cout << "-\n";
	// 	return;
	// }
	vector<char>ans(n,'+');
	int l = 0,r = n - 1;
	int zeros = 0, ones = 0;
	for (char c:s){
		if (c == '0') zeros ++;
		if (c == '1') ones ++;
	}
	int twos = k - ones - zeros;
	while (zeros > 0){
		ans[l++] = '-';
		zeros --;
	}

	while (ones > 0){
		ans[r--] = '-';
		ones --;
	}

	
	int m = l;
	int t = twos;
	if (l == r){
		ans[l] = '-';
		l ++;
	}
	while (l <= r && m <= r  && t > 0){
		ans[m++] = '?';
		t --;
	}
	t = twos;
	m = r;
	while (l <= r && m  >= l && t > 0){
		ans[m--] = '?';
		t --;
	}
	
	for (char c:ans){
		cout << c;
	}
	cout << "\n";
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int tc = 1;
	cin >> tc;
	while(tc--) solve();
}
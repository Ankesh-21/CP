#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >rotate(vector<vector<int> >a){
	int n = a.size();
	vector<vector<int> >r(n,vector<int>(n,0));
	for (int i = 0 ; i< n ;i++){
		for (int j = 0 ; j< n ;j++){
			r[n - j- 1][i] = a[i][j];
		}
	}
	for (int i = 0 ; i< n ;i++){
		for (int j = 0 ; j< n ;j++){
			a[n - j- 1][i] = r[i][j];
		}
	}
	
	return a;
}

void solve(){
	int n,k;
	cin >> n >> k;
	vector<vector<int> >a(n,vector<int>(n,0));
	for (int i = 0;i < n ;i++){
		for (int j = 0; j< n ;j++){
			cin >> a[i][j];
		}
	}
	
	vector<vector<int> >r = rotate(a);
//	for (int i = 0 ; i < n ; i++){
//		for (int j = 0; j < n ; j ++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
	int changes = 0;
	for (int i = 0; i < n ;i++){
		for (int j = 0; j < n ; j++){
			if (a[i][j] != a[n - i - 1][n - j - 1]){
				changes += 1;
			}
		}
	}

	changes /= 2;
	
	if (changes > k){
		cout<<"NO"<<endl;
		return;
	}
	else{
		int r = k - changes;
		if (n & 1)cout <<"YES"<<endl;
		else if (r & 1)cout <<"NO"<<endl;
		else cout <<"YES"<<endl;
	}
	
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

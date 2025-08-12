#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ;
	cin >> n;
	vector<int>a(n,0);
	for(int i = 0; i< n;i++){
		cin >> a[i];
	}
	
	int mini = INT_MAX;
	for(int i = 0 ; i<n-1;i++){
		// mini = min(mini, a[i] + a[i+1] / 2);
		for (int j = i+1; j< n;j++){
			if (j == i+1){
				mini = min(mini, a[i] + a[j] / 2);
			}
			else{
				mini = min(mini, a[i] + a[j]);
			}
		}
	}
	cout << mini << endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while (tc --){
		solve();
	}
}

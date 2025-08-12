#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n ;
    cin >> n;
    // int *a = (int *)malloc(n * sizeof(int));
    vector<int>a(n,0);
    for (int i= 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll mini = 1;
    ll maxi = 1;
    if (a[0] != 1){
    	cout<< "NO" <<endl;
    	return;
    }
   	for (int i = 1; i < n ; i++){
   		if (a[i] < mini || a[i] > maxi){
   			cout << "NO"<<endl;
   			return;
   		}
   		maxi += a[i];
   	}
   	cout << "YES"<<endl;
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

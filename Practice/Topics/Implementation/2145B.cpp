#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Observation
/*
{

}
*/
void handle(int n,int k,vector<char>&ans){
	// vector<int>ans;
	if (k > (n / 2)){
    		for(int i =0;i < n;i++){
    			cout << '?';
    		}
    		cout << endl;
    		return;
    	}
    	else{
    		for(int i =0;i < n/2;i++){
    			ans.push_back('?');
    		}
    		ans.push_back('+');
    		for(int i =0;i < n/2;i++){
    			ans.push_back('?');
    		}
    		return;
    	}
}
void solve(){
    // Write your Code
    int n,k;
    string s;
    cin >> n >>k;
    cin >> s;

    vector<char>ans(n,'+');
    int zeros = 0,ones = 0;
    for(char c:s){
    	if (c == '0'){
    		zeros += 1;
    	}
    	else if (c == '1'){
    		ones += 1;
    	}
    }

    if ((zeros + ones )== 0){
    	handle(n,k,ans);
    	return;
    }
    else{
    	for(int i =0;i < zeros;i++){
    		ans.push_back('-');
    	}
    	for(int i = n - ones;i < n;i++){
    		ans.push_back('-');
    	}
    	handle(n-(ones + zeros),k,ans);
    }

    for(char c:ans){
    	cout << c;
    }
    cout << "\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}
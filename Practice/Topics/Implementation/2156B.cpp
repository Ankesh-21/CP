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
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int>qs(q);
    for(int i =0;i < q;i++){
    	cin >> qs[i];
    }

    

    for(int i =0;i < q;i++){
    	int as = 0;
    	int bs = 0;
    	for(char c:s){
    		if(c == 'A'){
    			as ++;
    		}
    		else{
    			bs ++;
    		}
    	}

    	if (bs == 0){
    		cout << qs[i] <<" ";
    	}

    	else{

    		int cnt = 0;
    		while(qs[i]){
    			for(char c:s){
    				if (qs[i] == 0) break;
    				cnt += 1;
    				if (c == 'A'){
    					qs[i] -= 1;
    				}
    				else{
    					qs[i] = floor(qs[i] / 2);
    				}
    			}
    		}
    		cout << cnt << " ";
    	}

    	cout << endl;
    }
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
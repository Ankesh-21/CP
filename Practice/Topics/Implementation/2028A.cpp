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
    int n,a,b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int ind = 0;
    int x = 0,y = 0;
    // int ops = 0;
    // set<pair<int,int>>seen;
    // auto p = make_pair(x,y);
    // seen.insert(p);
    for (int i =0;i < 1000;i++){
    	char m = s[ind];
    	if (m == 'N') y++;
    	else if (m == 'S') y--;
    	else if (m == 'E') x++;
    	else x--;

    	if (x == a && y == b){
    		cout << "yes\n";
    		return;
    	}
    	ind = (ind + 1) % n;
    }

    cout << "No\n";
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
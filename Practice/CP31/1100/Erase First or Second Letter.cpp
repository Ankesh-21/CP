#include<bits/stdc++.h>
using namespace std;
#define ll long long

int remove(string&s,int i,int j,unordered_map<string,int>&seen){
	if ( i >= s.size() and j >= s.size()){
		return 0;
	}

	int delFirst = 0;
	if (i + 1< s.size()){
		string first = s.substr(i+1);
		cout<<"deleting first char: "<<first<<endl;
		if (seen[first] == 0){
			delFirst = 1 + remove(s,i + 2, i + 3,seen);
			seen[first] = delFirst;
		}
	}
	else return 1;

	int delSecond = 0;

	if (j + 1< s.size()){
		string second = s[i] + s.substr(j+1);
		cout<<"deleting second char: "<<second<<endl;
		if (seen[second] == 0){
			delSecond = 1 + remove(s,j + 1, j + 2,seen);
			seen[second] = delSecond;
		}
	}
	
	else return 1;

	return delFirst + delSecond;

}

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	unordered_map<string,int>seen;
	cout<<remove(s,0,1,seen)+ 1<<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	ll tc = 1;
	cin>>tc;
	while (tc--){
		solve();
	}
}
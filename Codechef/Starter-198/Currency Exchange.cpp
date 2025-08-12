#include<bits/stdc++.h>
using namespace std;

bool fun1(int b1,int b2,int steps,int incr){
	if (b1 == b2 && steps == 0){
		return true;
	}

	if (steps <= 0){
		return false;
	}

	bool one = false;
	if (incr == 1 && b1 >= 1){
		one = fun1(b1-1,b2,steps - 1,incr);
	}
	bool five = fun1(b1 + 5,b2,steps-1,incr);

	return one || five;
}

bool fun2(int b1,int b2,int steps,int incr){
	if (b1==b2 && steps == 0){
		return true;
	}

	if (steps <= 0){
		return false;
	}

	bool five = false;
	five = fun2(b1-5,b2,steps-1,incr);

	return five;
}

void solve(){
	int a1=1,b1=1,a2=1,b2=1;
	cin >> a1 >> b1 >> a2 >> b2;
	bool ans = false;
	if (a1 > a2){
		ans = fun1(b1,b2,a1 - a2,1);
	}
	else if (a1 < a2){
		ans = fun2(b1,b2,a2 - a1,0);
	}

	else{
		ans = b1 == b2;
	}
	if (ans){
		cout <<"YES"<<endl;
	}
	else
		cout <<"NO"<<endl;
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

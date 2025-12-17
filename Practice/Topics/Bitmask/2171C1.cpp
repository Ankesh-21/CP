#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>a(n+1),b(n+1);
    int mi = 0,ai = 0;
    for(int i =1; i <= n;i++){
        cin >> a[i];
        if (a[i] == 1){
            ai += 1;
        }
    }
    for(int i =1;i <= n;i++){
        cin >> b[i];
        if (b[i] == 1) mi += 1;
    }
    for (int i =1;i <= n;i++){
        if (i % 2){
            if (ai % 2 == 0 && b[i] == 1 && a[i] == 0){
                mi -= 1;
                ai += 1;
            }
            else if (ai % 2 == 0 && b[i] == 0 && a[i] == 1){
                mi ++;
                ai --;
            }
        }
        else{
            if (mi % 2 == 0 && a[i] == 1 && b[i] == 0){
                mi += 1;
                ai -= 1;
            }
            else if (mi % 2 == 0 && a[i] == 0 && b[i] == 1){
                mi --;
                ai ++;
            }
        }
    }
    if (ai%2 == mi%2){
        cout << "Tie" << endl;
        return;
    }
    if (ai % 2){
        cout << "Ajisai"<<endl;
    }
    else{
        cout << "Mai"<<endl;
    }

}
int main(){
    int tc = 1;
    cin >> tc;
    while(tc--)solve();
}
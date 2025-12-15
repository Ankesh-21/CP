#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,x;
    cin >> n >> x;
    vector<int>nums(n,0);
    for(int i =0;i < n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    // Two pointer 
    int left = 0;
    int right = n - 1;
    vector<int>ans;
    ll points = 0;
    ll current = 0;
    while (left < right){
        if (current + nums[right] >= x){
            ans.push_back(nums[right]);
            points += nums[right];
            current = (current + nums[right]) % x;
            right --;
        }
        else{
            ans.push_back(nums[left]);
            current = (current + nums[left]) % x;
            left ++;
        }
    }
    if (left == right){
        if ((current + nums[left]) >= x){
            points += nums[left];
        }
        ans.push_back(nums[left]);
        left ++;
    }
    // cout << "Here" << endl;
    cout << points << endl;
    if (points == 0){
        for (int el:nums){
            cout << el << " ";
        }
        cout << endl;
        return;
    }
    for(int el:ans){
        cout << el << " ";
    }
    cout << "\n";
}
int main(){
    int tc = 1;
    cin >> tc;
    while (tc --){
        solve();
    }
}
// wrong answer Participant claims that their construction achieves 503499 bonus points. However, participant's construction actually only achieves 460772 bonus points. (test case 7)

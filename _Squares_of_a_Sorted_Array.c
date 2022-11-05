#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    vector<int>v;
    for (int i=0 ; i<l ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    vector<int>ans;
    for (auto it : v){
        ans.push_back(it*it);
    }
    sort(ans.begin(),ans.end());
    for (auto it : ans){
        cout<<it<<" ";
    }
}
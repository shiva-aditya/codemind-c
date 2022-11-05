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
    for (int i=l/2 ;i<l ; i++){
        ans.insert(ans.begin(),v[i]);
    }
    for (int i=0 ; i<l/2 ; i++){
        ans.push_back(v[i]);
    }
    for (auto it : ans){
        cout<<it<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    vector<int>v;
    for (int p=0 ; p<l ; p++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    int r;
    cin>>r;
    r=r%l;
    vector<int>ans;
    for (int i=v.size()-1 ; i>v.size()-r-1 ; i--){
        ans.insert(ans.begin(),v[i]);
    }
    for (int i=0 ; i<l-r ; i++){
        ans.push_back(v[i]);
    }
    for (auto it : ans){
        cout<<it<<" ";
    }
}
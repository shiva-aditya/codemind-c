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
    vector<int>c;
    for (int i=0 ; i<l ; i++){
        int q;
        cin>>q;
        c.push_back(q);
    }
    vector<int>ans;
    for (int i=0 ; i<l ; i++){
        ans.push_back(v[i]+c[i]);
    }
    for (auto it : ans){
        cout<<it<<" ";
    }
}
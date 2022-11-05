#include<bits/stdc++.h>
using namespace std;
int p(vector<int>n,int m){
    int c=0;
    for (auto it : n){
        if (it>m)c+=2;
        else c+=1;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    vector<int>q;
    for (int i=0 ; i<n ; i++){
        int r;
        cin>>r;
        q.push_back(r);
    }
    int t;
    cin>>t;
    cout<<p(q,t);
}
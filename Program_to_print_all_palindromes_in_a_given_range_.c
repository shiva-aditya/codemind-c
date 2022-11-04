#include<bits/stdc++.h>
using namespace std; 
bool pal(int n){
    string s ;
    stringstream sso;
    sso<<n;
    sso>>s;
    string w=s;
    reverse(s.begin(),s.end());
    if (w==s) return true;
    else return false;
}
int main(){
    int z,m;
    cin>>z>>m;
    vector<int>v;
    for (int i=z ; i<=m ; i++){
        if (pal(i))v.push_back(i);
    }
    for (auto it : v){
        cout<<it<<" ";
    }
}
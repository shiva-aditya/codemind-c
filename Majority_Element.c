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
    for (auto it : v){
        if (count(v.begin(),v.end(),it)>(l/2)){
            cout<<it;
            break;
        }
    }
}
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
    int s=0;
    for (auto it : v){
        int w=sqrt(it);
        if (w*w==it)s+=it;
    }
    cout<<s;
}
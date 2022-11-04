#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cin>>r;
    int a=0;
    int i=0;
    while(r){
        int w=r%10;
        r=r/10;
        a+=w*pow(8,i);
        i+=1;
    }
    vector<int>ans;
    while(a){
        int z=a%2;
        a=a/2;
        ans.insert(ans.begin(),z);
    }
    for (auto it : ans){
        cout<<it;
    }
}
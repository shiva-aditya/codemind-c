#include<bits/stdc++.h>
using namespace std;
bool p(vector<int>a, int l){
    for (int i=0 ; i<l ; i++){
        if (a[i]%2!=0){
            if (i%2==0)return false;
        }
    }
    return true;
}
int main(){
    int s;
    cin>>s;
    vector<int>q;
    for (int i=0 ; i<s ; i++){
        int r;
        cin>>r;
        q.push_back(r);
    }
    if(p(q,s))cout<<"True";
    else cout<<"False";
}
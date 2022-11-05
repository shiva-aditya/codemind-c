#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    set<int>s;
    for (int i=0 ; i<l ; i++){
        int y;
        cin>>y;
        s.insert(y);
    }
    for (auto it : s){
        cout<<it<<" ";
    }
    
}
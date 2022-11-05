#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    set<int>s;
    for (int i=0 ; i<l ; i++){
        int q;
        cin>>q;
        s.insert(q);
    }
    if (s.size()==2){
        cout<<*max_element(s.begin(),s.end());
    }
    else {
    s.erase(max_element(s.begin(),s.end()));
    s.erase(max_element(s.begin(),s.end()));
    cout<<*max_element(s.begin(),s.end());
    }
}
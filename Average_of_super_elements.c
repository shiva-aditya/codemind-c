#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    vector<int>v;
    for (int i=0 ; i<l ; i++){
        int c;
        cin>>c;
        v.push_back(c);
    }
    unordered_set<int>s;
    vector<int>h;
    for (auto it : v){
        s.insert(it);
    }
    for (auto ut : s){
        if (count(v.begin(),v.end(),ut)==ut)h.push_back(ut);
    }
    float summ=0;
    for(auto it : h){
        summ+=it;
    }
    if (h.size()==0)cout<<-1;
    else printf("%.2f",summ/h.size());
}



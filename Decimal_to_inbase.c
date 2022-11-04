#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,b;
    cin>>t>>b;
    vector<int>a;
    while(t){
        int e=t%b;
        t=t/b;
        a.push_back(e);
    }
    int m=0;
    int c=0;
    for (auto it : a){
        if (it==0)c+=1;
        else{
            if (c>m)m=c;
            c=0;
        }
    }
    if (m==0)cout<<-1;
    else cout<<m;
}
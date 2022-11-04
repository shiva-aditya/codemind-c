#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>a;
    while(t){
        int e=t%10;
        t=t/10;
        a.push_back(e);
    }
    int e=0;
    int o=0;
    for (auto it : a){
        if (it%2==0)e+=1;
        else o+=1;
    }
    if (e and o)cout<<"Mixed";
    else if (e)cout<<"Even";
    else cout<<"Odd";
}
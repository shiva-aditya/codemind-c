#include<bits/stdc++.h>
using namespace std;
int rec(int);
int g;
int main(){
    int p;
    cin>>p;
    g=p;
    if (p<=0 or p>10000)cout<<"The Number Series is Not Possible Print";
    else cout<<rec(p);
}
int rec(int n){
    if (n==1)return g-0;
    else cout<<g-n+1<<" ";
    return rec(n-1);
}

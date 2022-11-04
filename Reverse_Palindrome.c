#include<bits/stdc++.h>
using namespace std;
bool pal(int a){
    string n;
    stringstream sso;
    sso<<a;
    sso>>n;
    string q=n;
    reverse(n.begin(),n.end());
    if (q==n)return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(1){
        int q=t;//int 95
        string s;//" "
        stringstream sso;
        sso<<q;
        sso>>s;//"95"
        reverse(s.begin(),s.end());
        t+=stoi(s);
        if (pal(t)){cout<<t;break;}
    }
}
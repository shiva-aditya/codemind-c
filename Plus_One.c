#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    string v="";
    for (int i=0 ; i<l ; i++){
        string q;
        cin>>q;
        v+=q;
    }
    int s=stoi(v)+1;
    string q;
    stringstream sso;
    sso<<s;
    sso>>q;
    for (int i=0 ; i<q.length() ; i++){
        cout<<q[i]<<" ";
    }
}
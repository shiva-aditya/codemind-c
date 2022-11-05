#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    vector<string>v;
    for (int i=0 ; i<l ; i++){
        string h;
        cin>>h;
        v.push_back(h);
    }
    int c=0;
    for (auto it : v){
        if (it.length()%2==0)c+=1;
    }
    cout<<c;
}
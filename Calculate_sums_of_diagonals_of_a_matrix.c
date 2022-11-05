#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    vector<vector<int>>v;
    for(int i=0 ; i<l ; i++){
        vector<int>d;
        for (int j=0 ; j<l ; j++){
            int e;
            cin>>e;
            d.push_back(e);
        }
        v.push_back(d);
    }
    int m=0;
    int s=0;
    for (int i=0 ; i<l ; i++){
        m+=v[i][i];
        s+=v[i][l-1-i];
    }
    cout<<"Principal Diagonal:"<<m<<endl;
    cout<<"Secondary Diagonal:"<<s;
}
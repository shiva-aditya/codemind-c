    #include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>vec;
    for (int i=1 ; i<a ; i++){
        if (a%i==0)vec.push_back(i);
    }
    int ans=0;
    for (auto it : vec){
        ans+=it;
    }
    if (ans>a)cout<<"True";
    else cout<<"False";
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int g;
    cin>>g;
    for (int o=0 ; o<g ; o++){
    int q,w;
    cin>>q>>w;
    int c=0;
    for (int j=q ; j<=w ; j++){
        int t=j;
        vector<int>v;
        while(t){
            int y=t%10;
            t=t/10;
            v.push_back(y);
        }   
        for (auto it : v){
            if (v[0]==2 or v[0]==3 or v[0]==9){
                c+=1;
                break;
            }
        }
    }
    cout<<c<<endl;
    }
}

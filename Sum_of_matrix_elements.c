#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,c;
    cin>>l>>c;
    int s=0;
    for (int i =0 ; i<l*c ; i++){
        int d;
        cin>>d;
        s+=d;
    }
    cout<<s;
}
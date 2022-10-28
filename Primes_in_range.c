#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n==1)return false;
    int y = sqrt(n);
    for (int i=2 ; i<(y+1) ; i++){
        if (n%i==0)return false;
    }
    return true;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int c=0;
    for (int i=a ; i<=b ; i++){
        if (prime(i))c++;
    }
    cout<<c;
}
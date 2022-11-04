#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int e;
    cin>>e;
    float c=0;
    for (float i=1 ; i<=e ;i++){
        float y=1/i;
        c+=y;
    }
    printf("%.2f",c);
}
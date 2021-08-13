#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll s1=0,s2=0;
    for(int i =1;i<=100;i++){
        s1=s1+i;
        s2=s2+(i*i);
    }
    if((s1*s1)>s2)
    cout<<(s1*s1)-s2;
    else
    cout<<s2-(s1*s1);
}

//ANS: 25164150  

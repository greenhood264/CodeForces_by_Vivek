#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    for(char c:s){
        if(c=='1') cnt1++;
        if(c=='2') cnt2++;
        if(c=='3') cnt3++;
    }
    int n=s.size();
    string ans=s;
    int i=0;
    while(cnt1!=0 &&i<n){
        ans[i]='1';
        i+=2;
        cnt1--;
    }
    while(cnt2!=0 &&i<n){
        ans[i]='2';
        i+=2;
        cnt2--;
        
    }
    while(cnt3!=0 &&i<n){
        ans[i]='3';
        i+=2;
        cnt3--;
    }
    cout<<ans;
    return 0;
    
}
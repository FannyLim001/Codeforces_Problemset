#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int o, x=0;
    cin>>s;
    sort(s.begin(), s.end());
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            x=1;
        } else {
            x=0;
            o++;
        }
    }
    if(o%2==0){
        cout<<"CHAT WITH HER!";
    } else {
        cout<<"IGNORE HIM!";
    }
}

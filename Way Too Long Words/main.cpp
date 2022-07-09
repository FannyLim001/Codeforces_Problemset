#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c;
    cin>>n;
    string w;

    for(int i=0; i<n; i++){
        cin>>w;
        c = w.length();
        if(c<=10){
            cout<<w<<endl;
        } else {
            cout<<w[0]<<c-2<<w[c-1]<<endl;
        }
    }
}

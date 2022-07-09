#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, o;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]>0){
            if(a[i]>=a[k-1]){
                o++;
            }
        }
    }
    cout<<o;
    return 0;
}

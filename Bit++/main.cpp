#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x=0;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if (s.find("++") != string::npos )
        {
            x++;
        }
        else if(s.find("--") != string::npos)
        {
            x--;
        }
    }
    cout<<x;
    return 0;
}

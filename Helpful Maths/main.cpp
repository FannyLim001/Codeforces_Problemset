#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string a[s.size()];
    int n=0;
    for (int i = 0;i < s.length();i++)
	{
		if (s[i] != '+')
		{
			a[n] = s[i];
			n++;
		}
	}
	sort(a, a + n);
	for (int i = 0;i < n;i++)
	{
	    cout << a[i];
		if (i != n - 1){
            cout << "+";
		}
	}

    return 0;
}
